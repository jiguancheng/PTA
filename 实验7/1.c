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
    int m, n;
    scanf("%d%d", &m, &n);
    int primes[1000], prime_cnt = 0;
    for (int i = m; i < n + 1; ++i)
        if (is_prime(i)) {
            primes[prime_cnt] = i;
            prime_cnt++;
        }
    int cnt = 0;
    for (int i = 0; i < prime_cnt; ++i) {
        for (int j = i; j < prime_cnt; ++j) {
            for (int k = j; k < prime_cnt; ++k) {
                int p = primes[i], q = primes[j], r = primes[k];
                if (is_prime(p * q + r) && is_prime(p * r + q) && is_prime(q * r + p))cnt++;
            }
        }
    }
    printf("%d", cnt);
}
