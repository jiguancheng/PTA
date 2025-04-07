//
// Created by jgc on 25-4-7.
//
#include <stdio.h>
int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int num = (n - 1) / (k - 1) + ((n - 1) % (k - 1) != 0);
    printf("%d", num);
}
