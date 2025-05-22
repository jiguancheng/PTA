//
// Created by jgc on 25-5-21.
//
#include <stdio.h>

struct Record {
    char name[11];
    int birthday;
    char number[18];
};

int main() {
    // 输入
    struct Record records[10];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%s%d%s", records[i].name, &records[i].birthday, records[i].number);

    // 排序
    struct Record temp;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j >= 1; --j) {
            if (records[j - 1].birthday > records[j].birthday)
                temp = records[j - 1], records[j - 1] = records[j], records[j] = temp;
        }
    }

    // 输出
    for (int i = 0; i < n; ++i)
        printf("%s %d %s\n", records[i].name, records[i].birthday, records[i].number);
}
