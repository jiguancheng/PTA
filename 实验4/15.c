//
// Created by jgc on 25-3-31.
//
#include <stdio.h>
#include <string.h>

char *check(const char *c) {
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < 3; ++i) {
        if (c[i] == 'E')
            cnt1++;
        else if (c[i] == 'Q')
            cnt2++;
        else
            cnt3++;
    }
    if (cnt1 == 3)
        return "Sun Strike";
    if (cnt2 == 3)
        return "Cold Snap";
    if (cnt3 == 3)
        return "EMP";
    if (cnt1 == 2 && cnt2)
        return "Forge Spirit";
    if (cnt1 == 2 && cnt3)
        return "Chaos Meteor";
    if (cnt2 == 2 && cnt1)
        return "Ice Wall";
    if (cnt2 == 2 && cnt3)
        return "Ghost Walk";
    if (cnt3 == 2 && cnt1)
        return "Alacrity";
    if (cnt3 == 2 && cnt2)
        return "Tornado";
    return "Deafening Blast";
}

int main() {
    char s[1000010] = {0};
    scanf("%s", s);
    unsigned len = strlen(s);

    char status[3] = {0};

    for (int i = 0; i < len; i++) {
        if (s[i] != 'R') {
            status[0] = status[1];
            status[1] = status[2];
            status[2] = s[i];
            continue;
        }
        if (status[0] == 0) {
            printf("FFFFFFFK\n");
            continue;
        }
        printf("%s\n", check(status));
    }
}
