//
// Created by jgc on 25-5-21.
//
#include <stdio.h>
#include <stdlib.h>

struct node { // 链表的节点，表示某个光标位置
    char next_char; // 光标后面的字母
    struct node *next, *last; // 上一个位置/下一个位置
};

int main() {
    struct node string = {0};
    struct node *head = &string, *start = &string, *end = &string;
    // head为光标位置
    char s[50001];
    int insert = 0;
    fgets(s, 50000, stdin);
    for (int i = 0; s[i] != '\n'; ++i) {
        switch (s[i]) {
            case '[': // home
                head = start;
                break;
            case ']': // end
                head = end;
                break;
            case '{': // left
                if (head->last != NULL)
                    head = head->last;
                break;
            case '}': // right
                if (head->next != NULL)
                    head = head->next;
                break;
            case '-': // insert
                insert = !insert;
                break;
            case '=': // backspace
                if (head->last == NULL)
                    break;
                head->last->next_char = head->next_char;
                head->last->next = head->next;
                if (head->next == NULL)
                    end = head->last;
                else
                    head->next->last = head->last;
                struct node *temp = head->last;
                free(head);
                head = temp;
                break;
            default: // input
                if (insert && head->next != NULL) {
                    head->next_char = s[i];
                    head = head->next;
                    break;
                }
                struct node *new = malloc(sizeof(struct node));
                new->next_char = head->next_char;
                new->last = head;
                new->next = head->next;

                if (head->next != NULL)
                    head->next->last = new;
                else
                    end = new;
                head->next = new;
                head->next_char = s[i];
                head = new;
        }
    }

    for (struct node *i = start->next; i->next != NULL; i = i->next) {
        putchar(i->last->next_char);
    }
    putchar(end->last->next_char);
    putchar('\n');
}
