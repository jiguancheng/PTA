//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    double a, c;
    int b;
    scanf("%lf%d%lf", &a, &b, &c);
    double d = b ? 1.26 : 2.455;
    printf(a * d > c ? "%.2lf T_T\n" : "%.2lf ^_^\n", a * d);
}
