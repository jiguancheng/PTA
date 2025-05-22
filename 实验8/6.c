//
// Created by jgc on 25-5-22.
//
#include <stdio.h>

int read_int() {
    // 读取一个整数
    int temp;
    scanf("%d", &temp);
    return temp;
}

int day_of_month(int year, int month) {
    // 返回某年某月的天数
    if (month % 2 == 0 && month >= 8 || month % 2 == 1 && month <= 7)
        return 31;
    if (month != 2)
        return 30;
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28;
}

int main() {
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);
    int n = read_int(), m = read_int();
    for (int i = 0; i < m; ++i) {
        if (read_int() == 0) {
            n--;
            continue;
        }
        break;
    }
    for (int i = 0; i < n; ++i) {
        if (day != day_of_month(year, month)) {
            day++;
            continue;
        }
        day = 1;
        month = month == 12 ? 1 : month + 1;
        year = month == 1 ? year + 1 : year;
    }
    printf("%04d/%02d/%02d", year, month, day);
}
