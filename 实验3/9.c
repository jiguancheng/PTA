//
// Created by jgc on 25-3-17.
//
#include <stdio.h>
#define max(a, b) (a > b ? a : b)

int main() {
    int year, hour;
    scanf("%d%d", &year, &hour);
    int base = year >= 5 ? 50 : 30;
    printf("%.2lf\n", (double) (base * hour + max(0, hour - 40) * base / 2));
}
