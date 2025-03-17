//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int c = a * 100. / b - 100 + .5;
    if (c < 10)
        printf("OK\n");
    else if (c < 50)
        printf("Exceed %d%%. Ticket 200\n", c);
    else
        printf("Exceed %d%%. License Revoked\n", c);
}
