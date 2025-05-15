//
// Created by jgc on 25-5-16.
//
#include<stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a0, a1, b0, b1;
        scanf("%d%d%d%d", &a0, &a1, &b0, &b1);
        int p = a0 / a1, q = b1 / b0, ans = 0;
        for (int x = 1; x * x <= b1; x++) {
            if (b1 % x)
                continue;
            if (x % a1 == 0 && gcd(x / a1, p) == 1 && gcd(q, b1 / x) == 1)
                ans++;
            int y = b1 / x;
            if (x == y)
                continue;
            if (y % a1 == 0 && gcd(y / a1, p) == 1 && gcd(q, b1 / y) == 1)
                ans++;
        }
        printf("%d", ans);
    }
    return 0;
}
