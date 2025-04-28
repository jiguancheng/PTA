//
// Created by jgc on 25-4-28.
//
#include <stdio.h>

char names[3][100];

void search(int layer, int src, int tar) {
    if (layer == 1) {
        printf("%s->%s\n", names[src], names[tar]);
        return;
    }
    int left = 3 - src - tar;
    search(layer - 1, src, left);
    printf("%s->%s\n", names[src], names[tar]);
    search(layer - 1, left, tar);
}

int main() {
    int n;
    scanf("%d%s%s%s", &n, names[0], names[1], names[2]);
    search(n, 0, 2);
}
