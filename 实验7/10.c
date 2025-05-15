//
// Created by jgc on 25-5-16.
//
#include <stdio.h>
#include <stdlib.h>

/**
 * Find the index of first minimum or maximum value in a array.
 * @param array     Array to find.
 * @param length    Length of the array.
 * @param min       1 to find minimum, 0 to maximum
 * @return          Index of the value.
 */
int array_minmax(const int *array, int length, int min) {
    int value = array[0], index = 0;
    for (int i = 0; i < length; ++i)
        if (min ? array[i] < value : array[i] > value)
            value = array[i], index = i;
    return index;
}

int read_int() {
    int temp;
    scanf("%d", &temp);
    return temp;
}

int main() {
    int n = read_int(), m = read_int();
    int *array = malloc(sizeof(int) * m), length = 0;
    for (int i = 0; i < m; ++i)
        array[i] = 0;
    int current_time = 0, cnt = 0;
    while (cnt != n) {
        if (length != m) {
            int index = array_minmax(array, m, 1);
            array[index] = read_int() + current_time;
            cnt++, length++;
            continue;
        }
        int index = array_minmax(array, m, 1);
        current_time = array[index];
        array[index] = -1;
        length--;
    }
    int time = array[array_minmax(array, m, 0)];
    free(array);
    printf("%d", time);
}
