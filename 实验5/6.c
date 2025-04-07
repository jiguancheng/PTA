//
// Created by jgc on 25-4-7.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);

    int *numbers = malloc(sizeof(int) * num);

    for (int i = 0; i < num; ++i)
        scanf("%d", &numbers[i]);

    double avg = 0;
    for (int i = 0; i < num; ++i)
        avg += numbers[i];
    avg /= num;

    double sum = 0;
    for (int i = 0; i < num; ++i)
        sum += (numbers[i] - avg) * (numbers[i] - avg);
    sum /= num;

    printf("%.5lf", sqrt(sum));

    free(numbers);
}