//
// Created by jgc on 25-4-28.
//
#include <math.h>
#include <stdio.h>

int main() {
    double distance = 0;
    for (int i = 0; i < 10; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        distance += sqrt(a * a + b * b);
    }
    printf("distance = %.6lf", distance);
}