//
// Created by jgc on 25-5-15.
//
#include <stdio.h>
#include <string.h>

int main() {
    char string[50];
    scanf("%s", string);
    int is_signal = 1, index = 0;
    while (index < strlen(string)) {
        char s = string[index];
        if (!(s >= '0' && s <= '9') && s != '.') {
            if (s != '+' && s != '-' || !is_signal) {
                is_signal = s == '(';
                putchar(s);
                putchar('\n');
                index++;
                continue;
            }
        }
        is_signal = 0;
        putchar(s);
        for (index++; index < strlen(string); ++index) {
            if (string[index] >= '0' && string[index] <= '9' || string[index] == '.')
                putchar(string[index]);
            else
                break;
        }
        putchar('\n');
    }
}
