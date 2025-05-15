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

int main() {
    int m = read_int(), n = read_int();
    int *matrix_a = malloc(sizeof(int) * m * n);
    for (int i = 0; i < m * n; ++i)
        matrix_a[i] = read_int();

    int r = read_int(), s = read_int();
    int *matrix_b = malloc(sizeof(int) * r * s);
    for (int i = 0; i < r * s; ++i)
        matrix_b[i] = read_int();

    int min_pos = 0, min_value = 100000000;
    for (int i = 0; i < m - r + 1; ++i)
        for (int j = 0; j < n - s + 1; ++j) {
            int result = 0;
            for (int k = 0; k < r; ++k)
                for (int l = 0; l < s; ++l)
                    result += abs(matrix_a[(i + k) * n + j + l] - matrix_b[k * s + l]);
            if (result < min_value) {
                min_pos = i * n + j;
                min_value = result;
            }
        }

    for (int i = 0; i < r; ++i) {
        printf("%d", matrix_a[min_pos + i * n]);
        for (int j = 1; j < s; ++j)
            printf(" %d", matrix_a[min_pos + i * n + j]);
        putchar('\n');
    }

    free(matrix_a);
    free(matrix_b);
}
