//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    const float pi = 3.14159;
    float r, h;
    scanf("%f%f", &r, &h);
    printf("v=%.2f", pi * r * r * h / 3);
}