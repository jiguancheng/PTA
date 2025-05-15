//
// Created by jgc on 25-5-15.
//
#include <stdio.h>
#include <stdlib.h>

struct node {
    int pos;
    struct node *next;
};

void solve(int n, int m) {
    struct node *list = malloc(sizeof(struct node) * n);
    list[0].pos = 1;
    struct node *last = &list[0];
    for (int i = 1; i < n; ++i) {
        list[i].pos = i + 1;
        last->next = &list[i];
        last = &list[i];
    }
    last->next = &list[0];
    struct node *now = &list[n - 1];
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j)
            now = now->next;
        now->next = now->next->next;
    }
    printf("%d\n", now->pos);
    free(list);
}

int main() {
    int n;
    scanf("%d", &n);
    solve(n, 3);
    fgets();
}
