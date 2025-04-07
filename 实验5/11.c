//
// Created by jgc on 25-4-7.
//
#include <stdio.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    if (m < n) {
        int t = n;
        n = m;
        m = t;
    }

    int a = gcd(m, n);
    printf("%d %d", a, m * n / a);
}
