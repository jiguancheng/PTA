//
// Created by jgc on 25-5-15.
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
    if (n % 2 == 0)
        n--;
    while (1) {
        n += 2;
        if (is_prime(n) && is_prime(n + 2)) {
            printf("%d %d\n", n, n + 2);
            break;
        }
    }
}
