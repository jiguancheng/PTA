//
// Created by jgc on 25-4-7.
//
#include <stdio.h>

int main() {
    int cnt = 0;
    while (1) {
        char c = getchar();
        if (c == '@')
            break;
        if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z')
            cnt++;
    }
    printf("%d", cnt);
}