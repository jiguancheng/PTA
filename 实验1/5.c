//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    double f1, f2;
    char c;
    int d;
    scanf("%lf %d %c %lf", &f1, &d, &c, &f2);
    printf("%c %d %.2lf %.2lf", c, d, f1, f2);
}
