//
// Created by jgc on 25-4-7.
//
#include <stdio.h>

int main() {
    char target[5] = {0};
    scanf("%s", target);
    int total = 0, first = 0, target_cnt = 0;
    for (;; total++) {
        char inp[12] = {0};
        scanf("%s", inp);
        if (inp[0] == '.')
            break;
        if (target[0] != inp[3] || target[1] != inp[4] || target[2] != inp[5] || target[3] != inp[6])
            continue;
        target_cnt++;
        if (!first)
            first = total + 1;
    }
    printf("%d\n%d %d", total, first, target_cnt);
}
