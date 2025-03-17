//
// Created by jgc on 25-3-17.
//
#include <stdio.h>
#define max(a, b) (a > b ? a : b)

int main() {
    double a;
    scanf("%lf", &a);
    if (a >= 0)
        printf("cost = %.2lf\n", max(a - 50, 0) * .05 + a * .53);
    else
        printf("Invalid Value!\n");
}
