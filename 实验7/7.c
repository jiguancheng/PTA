//
// Created by jgc on 25-5-16.
//
#include <stdio.h>
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
    int a_len = read_int();
    int *a = malloc(sizeof(int) * a_len);
    for (int i = 0; i < a_len; ++i)
        a[i] = read_int();
    int b_len = read_int();
    int *b = malloc(sizeof(int) * b_len);
    int *found = malloc(sizeof(int) * (a_len + b_len));
    int index = 0;
    for (int i = 0; i < b_len; ++i)
        b[i] = read_int();
    for (int i = 0; i < a_len; ++i) {
        if (find(b, b_len, a[i]) != -1 || find(found, index, a[i]) != -1)
            continue;
        found[index] = a[i];
        index++;
    }
    for (int i = 0; i < b_len; ++i) {
        if (find(a, a_len, b[i]) != -1 || find(found, index, b[i]) != -1)
            continue;
        found[index] = b[i];
        index++;
    }
    free(a);
    free(b);

    printf("%d", found[0]);
    for (int i = 1; i < index; ++i)
        printf(" %d", found[i]);

    free(found);
}
