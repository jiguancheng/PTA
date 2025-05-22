//
// Created by jgc on 25-5-21.
//
#include <stdio.h>

int main() {
    int people[6] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int index, cost;
        scanf("%d%d", &index, &cost);
        for (int j = 0; j < 6; ++j) {
            if (j == index - 1) // 花钱的人
                people[j] += cost * 5;
            else // 没花钱的人
                people[j] -= cost;
        }
    }
    printf("%d", people[0]);
    for (int i = 1; i < 6; ++i) {
        printf(" %d", people[i]);
    }
}
