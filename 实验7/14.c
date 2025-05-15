//
// Created by jgc on 25-5-16.
//
#include <stdio.h>
#include <stdlib.h>

int read_int() {
    int temp;
    scanf("%d", &temp);
    return temp;
}

double get_gp(int num) {
    if (num >= 90)
        return 4.0;
    if (num >= 85)
        return 3.7;
    if (num >= 82)
        return 3.3;
    if (num >= 78)
        return 3.0;
    if (num >= 75)
        return 2.7;
    if (num >= 72)
        return 2.3;
    if (num >= 68)
        return 2.0;
    if (num >= 64)
        return 1.5;
    if (num >= 60)
        return 1.0;
    return 0;
}

int main() {
    int n = read_int();
    int *scores = malloc(sizeof(int) * n);
    int *nums = malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i)
        scores[i] = read_int();
    for (int i = 0; i < n; ++i)
        nums[i] = read_int();

    int total_score = 0;
    double total_gp = 0;

    for (int i = 0; i < n; ++i) {
        total_score += scores[i];
        total_gp += scores[i] * get_gp(nums[i]);
    }

    printf("%.2lf", total_gp / total_score);

    free(scores);
    free(nums);
}
