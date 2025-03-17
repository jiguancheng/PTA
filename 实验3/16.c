//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    int year, month, day, s = 0;
    scanf("%d/%d/%d", &year, &month, &day);
    int days[12] = {
        31, 28 + (year % 4 == 0 && year % 100 != 0 || year % 400 == 0), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
    };
    for (int i = 1; i < month; i++)
        s += days[i - 1];
    s += day;
    printf("%d", s);
}
