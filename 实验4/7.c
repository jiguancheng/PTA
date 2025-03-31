//
// Created by jgc on 25-3-31.
//
#include <stdio.h>

int main() {
    int n, min, temp;
    scanf("%d", &n);
    scanf("%d", &min);
    for (int i = 0; i < n - 1; ++i) {
        scanf("%d", &temp);
        min = (temp > min ? min : temp);
    }
    printf("min = %d", min);
}