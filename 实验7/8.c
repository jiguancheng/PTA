//
// Created by jgc on 25-5-16.
//
#include <stdio.h>;
#include <stdlib.h>

/**
 * Find the index of a value in the array.
 * @param array     A array.
 * @param length    The length of the array.
 * @param value     The value to find.
 * @return          The index of the value, -1 if not found.
 */
int find(const int *array, int length, int value) {
    for (int i = 0; i < length; ++i)
        if (array[i] == value)
            return i;
    return -1;
}

int read_int() {
    int temp;
    if (scanf("%d", &temp) == 1)
        return temp;
    return 0;
}

int main() {
    int length = read_int();
    int *array = malloc(sizeof(int) * length);
    int repeat = 0;
    for (int i = 0; i < length; ++i) {
        int temp = read_int();
        if (find(array, i, temp) != -1) {
            repeat = 1;
            break;
        }
        array[i] = temp;
    }
    printf(repeat ? "YES" : "NO");
    free(array);
}
