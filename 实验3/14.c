//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    char text[] = "[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n";
    printf(text);
    char s[][7] = {"3.00\n", "2.50\n", "4.10\n", "10.20\n"};
    int cnt = 5, t;
    while (cnt--) {
        scanf("%d", &t);
        if (!t)
            break;
        printf("price = ");
        if (t > 0 && t < 5)
            printf("%s", s[t - 1]);
        else
            printf("0.00\n");
    }
}
