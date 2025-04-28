//
// Created by jgc on 25-4-28.
//
#include <stdio.h>
#include <string.h>

char types[][20] = {
    "char\n",
    "int\n",
    "long\n",
    "long long\n",
    "__int128\n",
    "float\n",
    "double\n",
    "long double\n",
};

int sizes[] = {
    1, 4, 4, 8, 16, 4, 8, 16,
};

int getByteofType(char t[]) {
    for (int i = 0; i < 8; i++) {
        if (strcmp(t, types[i]) == 0) {
            return sizes[i];
        }
    }
}

int main() {
    char text[20];
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; ++i) {
        fgets(text, 20, stdin);
        printf("%d", getByteofType(text));
    }
}
