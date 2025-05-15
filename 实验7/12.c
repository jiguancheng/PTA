//
// Created by jgc on 25-5-16.
//
#include <stdio.h>

int read_int() {
    int temp;
    scanf("%d", &temp);
    return temp;
}

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int a = read_int(), b = read_int();
    if (b > a) {
        int t = a;
        a = b, b = t;
    }
    printf(gcd(a, b) != 1 ? "No." : "Yes.");
}
