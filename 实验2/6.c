//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--){
        char c;
        scanf("%c", &c);
        scanf("%c", &c);
        if (((c <= 'z') && (c >= 'a')) || ((c <= 'Z') && (c >= 'A')))
            printf("%d\n", c);
        else
            printf("illegal\n");
    }
}