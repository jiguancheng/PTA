//
// Created by jgc on 25-4-28.
//
#include <stdio.h>
#include <string.h>

int main() {
    int n, cnt = 0;
    char a[100], b[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s%s", a, b);
        if (strcmp(b, "HA") == 0)
            cnt++;
    }
    printf("%d\n", cnt);
}
