//
// Created by jgc on 25-3-31.
//
#include <stdio.h>

int is_prime(int n) {
    if (n < 2)
        return 0;
    if (n < 4)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    int sum = 0;
    for (int i = a; i <= b; ++i)
        if (is_prime(i))
            sum += i;
    printf("%d", sum);
}