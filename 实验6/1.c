//
// Created by jgc on 25-4-28.
//
#include <stdio.h>

int main(){
    char a[50] = {0};
    int cnt = 0;
    while (scanf("%s", a) == 1)
        cnt++;
    printf("%d", cnt / 2);
}