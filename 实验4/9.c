//
// Created by jgc on 25-3-31.
//
#include <stdio.h>

int main() {
    long long xa, ya, xb, yb, xc, yc;
    scanf("%lld%lld%lld%lld%lld%lld", &xa, &ya, &xb, &yb, &xc, &yc);
    if (xa == xb && xb == xc || ya == yb && yb == yc || (xb - xa) * (yc - yb) == (xc - xb) * (yb - ya)) { //共线
        printf("no");
        return 0;
    }
    if (((xb - xa) * (xc - xa) + (yb - ya) * (yc - ya)) * 2 == (xc - xa) * (xc - xa) + (yc - ya) * (yc - ya)) { // 如果B在AC中间，可以实现
        printf("yes");
        return 0;
    }
    printf("no");
}