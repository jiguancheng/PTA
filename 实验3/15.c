//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    char m[] = "A23456789TJQK";
    int a;
    scanf("%d", &a);
    if (a < 1 || a > 13)
        printf("none");
    else
        printf("%c", m[a - 1]);
}