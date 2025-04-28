//
// Created by jgc on 25-4-28.
//
#include <stdio.h>

int is_start = 1;

void out(int a, int b) {
    if (b == 0)
        return;
    if (!is_start)
        putchar('*');
    is_start = 0;
    if (b == 1)
        printf("%d", a);
    else
        printf("%d^%d", a, b);
}

void split(int n) {
    printf("%d=", n);
    int cnt = 0;
    while (n % 2 == 0) {
        n /= 2;
        cnt++;
    }
    out(2, cnt);
    if (n == 1)
        return;
    cnt = 0;
    int i = 3;
    while (i * i <= n) {
        if (n % i == 0) {
            cnt++;
            n /= i;
            continue;
        }
        out(i, cnt);
        cnt = 0;
        i += 2;
    }
    if (i != n) {
        out(i, cnt);
        i = n;
        cnt = 0;
    }
    out(i, cnt + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("1=1");
        return 0;
    }
    split(n);
}
