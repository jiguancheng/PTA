//
// Created by jgc on 25-3-31.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n / 4 - n / 100 + n / 400);
}