//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    int d;
    scanf("%d", &d);
    printf("%d", (d + 1) % 7 + 1);
}