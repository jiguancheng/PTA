//
// Created by jgc on 25-4-28.
//

#include <stdio.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) == 2) {
        if (a < b) {
            int t = a;
            a = b, b = t;
        }
        printf("%d\n", a * b / gcd(a, b));
    }
    EOF
}
