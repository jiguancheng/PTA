//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("g(%.3lf) = %.3lf", x, (x ? .5 / x : 0.));
}