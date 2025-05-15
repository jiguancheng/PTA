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
    int up = read_int(), down = read_int();
    long long result = 1;
    for (int i = 0; i < up; ++i) {
        result *= down - i;
        result /= i + 1;
    }
    printf("result = %lld", result);
}
