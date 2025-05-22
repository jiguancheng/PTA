//
// Created by jgc on 25-5-22.
//
#include <stdio.h>

void first_line(int n) { // 第一、三、五行相同
    for (int i = 0; i < n + 2; ++i)
        putchar('#');
    putchar(' ');
    for (int i = 0; i < n + 2; ++i)
        putchar('#');
    putchar(' ');
    for (int i = 0; i < n + 2; ++i)
        putchar('#');
    putchar('\n');
}

int main() {
    int n;
    scanf("%d", &n);
    n++;
    first_line(n);
    for (int j = 0; j < n; ++j) {
        putchar('#');
        for (int i = 0; i < n; ++i)
            putchar(' ');
        printf("# #");
        for (int i = 0; i < 2 * n + 3; ++i)
            putchar(' ');
        printf("#\n");
    }
    first_line(n);
    for (int j = 0; j < n; ++j) {
        putchar('#');
        for (int i = 0; i < n; ++i)
            putchar(' ');
        printf("# #");
        for (int i = 0; i < n; ++i)
            putchar(' ');
        printf("#  ");
        for (int i = 0; i < n; ++i)
            putchar(' ');
        printf("#\n");
    }
    first_line(n);
}