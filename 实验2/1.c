//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    if (a > 'X')
        a -= 26;
    a += 2;
    printf("%c", a);
}