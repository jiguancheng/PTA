//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 3 && n % 5 && n % 7) {
        printf("n\n");
        return 0;
    }
    int start = 1;
    for (int i = 3; i < 8; i += 2) {
        if (n % i)
            continue;
        if (start) {
            printf("%d", i);
            start = 0;
            continue;
        }

        printf(" %d", i);
    }
}
