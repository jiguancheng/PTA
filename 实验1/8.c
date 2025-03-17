//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = (b / 100 - a / 100) * 60 + b % 100 - a % 100;
    printf("%02d:%02d", c / 60, c % 60);
}
