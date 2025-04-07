//
// Created by jgc on 25-4-8.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long value = 1;
    for (int i = 0; i <= n; ++i) {
        printf("pow(3,%d) = %lld\n", i, value);
        value *= 3;
    }
}