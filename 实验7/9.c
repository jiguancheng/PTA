//
// Created by jgc on 25-5-16.
//
#include <stdio.h>

int read_int() {
    int temp;
    if (scanf("%d", &temp) == 1)
        return temp;
    return 0;
}

int main() {
    int N = read_int();
    int tags[1001] = {0};
    while (N--) {
        int len = read_int();
        while (len--)
            tags[read_int()]++;
    }
    int max_value = -1, max_index;
    for (int i = 1000; i > 0; i--)
        if (tags[i] > max_value)
            max_index = i, max_value = tags[i];
    printf("%d %d", max_index, max_value);
}
