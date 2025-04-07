//
// Created by jgc on 25-4-7.
//
#include <stdio.h>

int main() {
    int total = 1, grow_up = 0, first = 1, second = 0, third = 0, target, month_cnt = 1;
    scanf("%d", &target);
    for (;; month_cnt++) {
        if (total >= target)
            break;
        grow_up += second;
        total += grow_up;
        second = first;
        first = grow_up;
    }
    printf("%d", month_cnt);
}