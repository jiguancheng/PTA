//
// Created by jgc on 25-4-28.
//
#include <stdio.h>
#include <stdbool.h>

bool judge(int year, int demand) {
    char s[10] = {0};
    int d[10] = {0}, types = 0;
    sprintf(s, "%04d", year);
    for (int i = 0; i < 4; i++)
        d[s[i] - '0'] = 1;
    for (int i = 0; i < 10; ++i)
        types += d[i];
    if (types == demand)
        return true;
    return false;
}

int main() {
    int y, n, x = 0;
    scanf("%d%d", &y, &n);
    while (true) {
        if (judge(y + x, n))
            break;
        x++;
    }
    printf("%d %04d", x, y + x);
}
