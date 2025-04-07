//
// Created by jgc on 25-4-7.
//
#include <stdio.h>
#include <stdlib.h>

struct data {
    char id[17];
    int test, final;
};

int main() {
    int n, m, temp;
    scanf("%d", &n);
    struct data* d = malloc(sizeof(struct data) * n);
    for (int i = 0; i < n; ++i) {
        scanf("%s%d%d", d[i].id, &d[i].test, &d[i].final);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &temp);
        for (int j = 0; j < n; ++j)
            if (d[j].test == temp)
                printf("%s %d\n", d[j].id, d[j].final);
    }
    free(d);
}
