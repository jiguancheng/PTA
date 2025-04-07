//
// Created by jgc on 25-4-8.
//
#include <stdio.h>

int main() {
    int n;
    double temp = 1, result = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        temp /= i;
        result += temp;
    }
    printf("%.8lf", result);
}