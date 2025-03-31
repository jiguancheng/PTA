//
// Created by jgc on 25-3-31.
//
#include <stdio.h>

int main() {
    double s = 1, a = 1;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        a /= i;
        s += a;
    }
    printf("%.8lf", s);
}