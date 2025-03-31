//
// Created by jgc on 25-3-31.
//
#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    scanf("%s", s);
    int digits = 0, sum = 0;
    for (int i = 0; i < strlen(s); ++i) {
        digits++;
        sum += s[i] - '0';
    }
    printf("%d %d", digits, sum);
}
