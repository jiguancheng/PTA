//
// Created by jgc on 25-3-31.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if ((n - 1) % 5 <= 2) // 打鱼
        printf("Fishing in day %d", n);
    else // 晒网
        printf("Drying in day %d", n);
}
