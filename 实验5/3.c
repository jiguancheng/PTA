//
// Created by jgc on 25-4-7.
//
#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);
    char op;
    while (1) {
        scanf("%c", &op);
        if (op == '=')
            break;
        long long temp;
        scanf("%lld", &temp);
        if (op == '+')
            num += temp;
        else if (op == '-')
            num -= temp;
        else if (op == '*')
            num *= temp;
        else if (op == '/') {
            if (!temp) {
                printf("ERROR");
                return 0;
            }
            num /= temp;
        }
        else {
            printf("ERROR");
            return 0;
        }
    }
    printf("%lld", num);
}