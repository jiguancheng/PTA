//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("%d", d * 1000 + c * 100 + b * 10 + a);
}