//
// Created by jgc on 25-3-17.
//
#include <stdio.h>
#include <string.h>

char *out(char c) {
    switch (c) {
        case '-': return "fu";
        case '0': return "ling";
        case '1': return "yi";
        case '2': return "er";
        case '3': return "san";
        case '4': return "si";
        case '5': return "wu";
        case '6': return "liu";
        case '7': return "qi";
        case '8': return "ba";
        case '9': return "jiu";
        default:

    }
}

int main() {
    char a[1000];
    scanf("%s", a);
    for (int i = 0; i < strlen(a) - 1; ++i)
        printf("%s ", out(a[i]));
    printf("%s\n", out(a[strlen(a) - 1]));
}
