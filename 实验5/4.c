//
// Created by jgc on 25-4-7.
//
#include <stdio.h>

int is_prime(int n) {
    if (n < 2)
        return 0;
    if (n < 4)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == 4) {
        printf("4 = 2 + 2\n");
        return 0;
    }
    for (int i = 3;; ++i)
        if (is_prime(i) && is_prime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            break;
        }
}