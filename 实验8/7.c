//
// Created by jgc on 25-5-24.
//
#include <stdio.h>

char names[][10] = {"Captain", "Cook", "Doctor", "Engineer", "Gunner", "Hunter", "Navigator", "Priest"};

int get_type(const char *str) {
    // 比较前两个字母，得出职业类型
    for (int i = 0; i < 8; ++i)
        if (str[0] == names[i][0] && str[1] == names[i][1])
            return i;
    return -1;
}

int main() {
    int has[8] = {0};
    char inp[300];

    scanf("%s", inp);
    has[get_type(inp)] = 1;
    int n;
    scanf("%d", &n);
    getchar(); // 把换行读取掉
    while (n--) {
        fgets(inp, 300, stdin);
        has[get_type(inp)] = 1;
    }
    int all_ready = 1;
    for (int i = 0; i < 8; ++i) {
        if (has[i] == 0) {
            all_ready = 0;
            printf(names[i]);
            putchar('\n');
        }
    }
    if (all_ready)
        printf("Ready");
}
