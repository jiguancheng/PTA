//
// Created by jgc on 25-3-31.
//
#include <stdio.h>
#include <string.h>

char parse(char c) {
    if (c > 'z' || c < 'a' && c > 'Z' || c < 'A')
        return c;
    c += 3;
    if (c > 'Z' && c < 'a' || c > 'z')
        c -= 26;
    return c;
}

int main() {
    char s[2000] = {0};
    fgets(s, 2000, stdin);
    for (int i = 0; i < strlen(s); ++i) {
        putchar(parse(s[i]));
    }
}
