//
// Created by jgc on 25-5-16.
//
#include <stdio.h>

int read_int() {
    int temp;
    scanf("%d", &temp);
    return temp;
}

int main() {
    int n = read_int(), cnt = 0;
    while (n--) {
        int temp = read_int();
        cnt += temp / 70 + (temp % 70 != 0);
    }
    printf("%.1lf", cnt * .1);
}
