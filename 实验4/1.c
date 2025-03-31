//
// Created by jgc on 25-3-31.
//
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double s = 0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; ++i) {
        s += sqrt(i);
    }
    printf("sum = %.2lf", s);
}
