//
// Created by jgc on 25-5-21.
//
#include <stdio.h>

struct record {
    int area, building_num, room_num, breakfast, lunch, dinner;
};

struct array {
    // 可以同时记录长度的数组
    int length;
    struct record data[20];
};

void append(struct array *array, struct record new_value) {
    // 在数组中添加一项
    array->data[array->length] = new_value;
    array->length++;
}

void sort(struct array *array) {
    struct record *list = array->data, temp;
    for (int i = 0; i < array->length; ++i)
        for (int j = i; j > 0; --j)
            if (list[j - 1].building_num * 1000 + list[j - 1].room_num > list[j].building_num * 1000 + list[j].
                room_num) {
                temp = list[j - 1];
                list[j - 1] = list[j];
                list[j] = temp;
            }
}

void output(struct array *array) {
    // 输出
    sort(array); // 输出前排序
    int breakfast = 0, lunch = 0, dinner = 0;
    for (int i = 0; i < array->length; ++i) {
        breakfast += array->data[i].breakfast;
        lunch += array->data[i].lunch;
        dinner += array->data[i].dinner;
    }
    printf("%d %d %d %d\n", array->length, breakfast, lunch, dinner);

    for (int i = 0; i < array->length; ++i) {
        struct record *re = &array->data[i];
        printf("%s%d %d %d %d %d\n", re->area == 1 ? "liu" : (re->area == 2 ? "song" : "jv"), re->building_num,
               re->room_num, re->breakfast, re->lunch, re->dinner);
    }
}

// 读取一个int类型输入    问就是懒得用scanf （￣︶￣）↗　
int read_int() {
    int temp;
    scanf("%d", &temp);
    return temp;
}

int main() {
    struct array song = {0}, jv = {0}, liu = {0};
    for (int _ = 0; _ < 3; ++_) {
        int n = read_int();
        for (int i = 0; i < n; ++i) {
            getchar(); // 行末换行符
            char c = getchar();
            int area = 0; // 0 -> jv, 1 -> liu, 2 -> song
            switch (c) {
                // 读取剩余的拼音部分
                case 's':
                    getchar();
                    area++;
                case 'l':
                    getchar();
                    area++;
                case 'j':
                    getchar();
            }
            struct record record = {area, read_int(), read_int(), read_int(), read_int(), read_int()};
            append(area == 1 ? &liu : (area ? &song : &jv), record);
        }
    }

    output(&song);
    output(&jv);
    output(&liu);
}
