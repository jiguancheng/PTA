//
// Created by jgc on 25-3-31.
//
#include<stdio.h>

int main() {
    char a[19] = {0};
    int b[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char c[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int n;
    scanf("%d", &n);
    int all_pass = 1; // 不一定非得计数，弄一个bool值判断就够了，命名可以清晰一点，以免混淆
    for (int i = 1; i <= n; i++) {
        scanf("%s", a);
        int sum = 0, valid = 1;
        char num = a[17];
        for (int j = 0; j < 17; j++) {
            // 前17位，这里漏了
            if (a[j] == 'X') {
                valid = 0;
                break; // 前17位中遇到X应该直接判错
            } else {
                sum += (a[j] - '0') * b[j];
            }
        }
        int y = sum % 11; //计算的校验码
        if (c[y] != num || !valid) {
            all_pass = 0;
            puts(a);
        }
    }
    if (all_pass)
        printf("All passed");
    return 0;
}
