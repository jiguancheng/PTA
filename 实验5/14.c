//
// Created by jgc on 25-4-7.
//
#include <stdio.h>

int main() {
    int cnt = 0, in_word = 0;
    while (1) {
        char c = getchar();
        if (c == '\n')
            break;
        if (!in_word && c != ' ') {
            in_word = 1;
            cnt++;
            continue;
        }
        if (in_word && c == ' ')
            in_word = 0;
    }
    printf("%d", cnt);
}