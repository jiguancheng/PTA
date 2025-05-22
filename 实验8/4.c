//
// Created by jgc on 25-5-22.
//
#include <stdio.h>

/* 相当于:
 * int min(int a, int b) {
 *     return (a < b ? a : b)
 * }
 */
#define min(a, b) (a < b ? a : b)
// 同上
#define max(a, b) (a > b ? a : b)

int main() {
    int start_hour, start_minute, end_hour, end_minute, reach_hour, reach_minute;
    scanf("%d:%d-%d:%d", &start_hour, &start_minute, &end_hour, &end_minute);
    scanf("%d:%d", &reach_hour, &reach_minute);
    int start_time = start_hour * 60 + start_minute, end_time = end_hour * 60 + end_minute;
    int reach_time = reach_hour * 60 + reach_minute;
    int total = 0;
    for (int i = start_time; i < end_time + 1; ++i)
        total += max(0, i - reach_time);
    printf("%.2lf", total * 1. / (end_time - start_time + 1));
}