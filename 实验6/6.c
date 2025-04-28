//
// Created by jgc on 25-4-28.
//
#include <stdio.h>
#include <string.h>

char *reverse(char s[]) {
    static char reversed[100] = {0};
    for (int i = strlen(s) - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = s[i];
    }
    return reversed;
}

int main() {
    char s[100] = {0};
    scanf("%s", s);
    printf("%s\n", reverse(s));
}
