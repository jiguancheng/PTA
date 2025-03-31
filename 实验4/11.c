//
// Created by jgc on 25-3-31.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) { // 比较方便的循环方法
        char s[10];
        double inp1, inp2, inp3, inp4, inp5;
        scanf("%s%lf%lf%lf%lf%lf", s, &inp1, &inp2, &inp3, &inp4, &inp5);
        int is_male = s[0] == 'm', cnt = 0;
        if (inp1 < 4. || inp1 > 10.)
            cnt++;
        if (inp2 < 3.5 || inp2 > 5.5)
            cnt++;
        if (is_male && (inp3 < 120 || inp3 > 160) || !is_male && (inp3 < 110 || inp3 > 150))
            cnt++;
        if (is_male && (inp4 < 42 || inp4 > 48) || !is_male && (inp4 < 36 || inp4 > 40))
            cnt++;
        if (inp5 < 100 || inp5 > 300)
            cnt++;

        if (cnt)
            printf("%d\n", cnt);
        else
            printf("normal\n");
    }
}
