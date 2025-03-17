//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    int sum = 0, a;
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &a);
        sum += a;
    }
    printf("Sum = %d; Average = %.1f", sum, sum * 1. / 4);
}
