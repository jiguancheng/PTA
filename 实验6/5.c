//
// Created by jgc on 25-4-28.
//
#include <stdio.h>

int main() {
    int first = 1, second = 1, third, cnt = 2;
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("1");
        return 0;
    }
    while (1) {
        third = first + second;
        cnt++;
        if (third >= n)
            break;
        first = second, second = third;
    }
    if (third == n)
        printf("%d", cnt);
    else
        printf("-1");
}
