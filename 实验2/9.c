//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    long long sum = (a + a - b + 1) * b / 2;
    printf("%lld", sum);
}