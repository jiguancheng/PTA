//
// Created by jgc on 25-4-8.
//
#include <stdio.h>

int main() {
    double sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; ++i) {
        sum += 1. / i;
    }
    printf("sum = %.6lf", sum);
}