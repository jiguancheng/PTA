//
// Created by jgc on 25-3-17.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, a;
    scanf("%d%d", &n, &a);
    n++;
    while (a--) {
        char *c = malloc(sizeof(char) * n);
        scanf("%s", c);
        int s = 0;
        for (int i = 0; i < strlen(c); i++) {
            s <<= 1;
            if (c[i] == 'n')
                s += 1;
        }
        printf("%d\n", ++s);
        free(c);
    }
}
