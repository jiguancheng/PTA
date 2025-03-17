//
// Created by jgc on 25-3-17.
//
#include <stdio.h>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int set_warn(int n, int *p) {
    if (*p != 0) {
        printf("Warning: please check all the tires!\n");
        return 1;
    }
    *p = n;
    return 0;
}

int main() {
    int a, b, c, d, m, z;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &m, &z);
    int x = max(a, max(b, max(c, d)));
    if (min(a, min(b, min(c, d))) >= max(x - z, m)) {
        printf("Normal\n");
        return 0;
    }
    int warn = 0;
    if (a < max(x - z, m))
        if (set_warn(1, &warn))
            return 0;
    if (b < max(x - z, m))
        if (set_warn(2, &warn))
            return 0;
    if (c < max(x - z, m))
        if (set_warn(3, &warn))
            return 0;
    if (d < max(x - z, m))
        if (set_warn(4, &warn))
            return 0;
    printf("Warning: please check #%d!", warn);
}
