//
// Created by jgc on 25-3-31.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int current_num = n * n - n + 1, target_num = n * n * n;
    printf("%d*%d*%d=%d=%d", n, n, n, target_num, current_num);
    target_num -= current_num;
    while (target_num) {
        current_num += 2;
        target_num -= current_num;
        printf("+%d", current_num);
    }
}