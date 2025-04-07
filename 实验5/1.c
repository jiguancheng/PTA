//
// Created by jgc on 25-4-7.
//
#include <stdio.h>
#include <string.h>

void solve() {
    char num[1010];
    scanf("%s", num);
    int sum = 0;
    for (int i = 0; i < strlen(num); ++i) {
        sum += num[i] - '0';
    }
    printf(sum % 3 ? "NO\n" : "YES\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}