//
// Created by jgc on 25-5-21.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char target[8][9] = {
        "11111111",
        "10000001",
        "10111101",
        "10111101",
        "10111101",
        "10111101",
        "10000001",
        "11111111"
    }; // 要找到的矩阵

    int n, m;
    scanf("%d%d", &n, &m);
    /*动态申请内存
     *这里matrix是一个大小为n的一维数组，存储指向一维字符数组的指针
     *下面的循环申请n个长度为m的一维字符数组
     */
    char **matrix = malloc(sizeof(char *) * n);
    for (int i = 0; i < n; ++i)
        matrix[i] = malloc(sizeof(char) * m);

    for (int i = 0; i < n; ++i)
        scanf("%s", matrix[i]);
    for (int i = 0; i < n - 7; ++i)
        for (int j = 0; j < m - 7; ++j) {
            int found = 1;
            for (int k = 0; k < 8; ++k) {
                if (!found)
                    break;
                for (int l = 0; l < 8; ++l)
                    if (target[k][l] != matrix[i + k][j + l]) {
                        found = 0;
                        break;
                    }
            }
            if (found)
                printf("%d %d\n", i, j);
        }


    // release memory 释放内存
    for (int i = 0; i < n; ++i)
        free(matrix[i]);
    free(matrix);
}
