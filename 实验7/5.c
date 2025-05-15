//
// Created by jgc on 25-5-15.
//
#include <stdio.h>

void solve(int n, int m) {
    if (m == 1) {
        scanf("%d", &n);
        return;
    }
    int start = 0;
    for (int i = 0; i < n - 1; ++i) {
        start = (start + m) % (i + 2);
    }
    printf("%d", start + 1);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    solve(n, m);
}
