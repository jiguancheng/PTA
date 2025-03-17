//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    int a, n, win = 0, cnt = 0;
    scanf("%d%d", &a, &n);
    while (n--) {
        cnt++;
        int temp;
        scanf("%d", &temp);
        if (temp < 0)
            break;
        if (temp == a) {
            win = 1;
            break;
        }
        printf(temp < a ? "Too small\n" : "Too big\n");
    }
    printf(win ? (cnt == 1 ? "Bingo!\n" : (cnt <= 3 ? "Lucky You!\n" : "Good Guess!\n")) : "Game Over\n");
}
