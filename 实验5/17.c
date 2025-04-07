//
// Created by jgc on 25-4-8.
//
#include <stdio.h>

int main() {
    int len, distance;
    scanf("%d%d", &len, &distance);
    distance %= len; // distance > len
    int data[110];
    for (int i = 0; i < len; ++i)
        scanf("%d", &data[i]);
    if (distance == 0) {
        printf("%d", data[0]);
        for (int i = 1; i < len; ++i)
            printf(" %d", data[i]);
        return 0;
    }
    printf("%d", data[len - distance]);
    for (int i = len - distance + 1; i < len; ++i)
        printf(" %d", data[i]);
    for (int i = 0; i < len - distance; ++i)
        printf(" %d", data[i]);
}
