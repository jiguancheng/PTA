//
// Created by jgc on 25-4-7.
//
#include <stdio.h>

struct player {
    char id[30];
    double Dps, M, Tow, S, K, D, A;
    double v;
};

void read(char *win_flag, struct player *data) {
    scanf("%s", win_flag);
    for (int i = 0; i < 5; ++i) {
        scanf(
            "%s%lf%lf%lf%lf%lf%lf%lf",
            data[i].id,
            &data[i].Dps,
            &data[i].M,
            &data[i].Tow,
            &data[i].S,
            &data[i].K,
            &data[i].D,
            &data[i].A
        );
        data[i].v = data[i].Dps / 50000 + data[i].M / 30000 + data[i].Tow / 10000 + data[i].S / 100 + (
                        data[i].K + data[i].A) / (data[i].D + 1);
    }
}

void half_solve() {
    struct player player_data[5];
    char win_flag[5];
    read(win_flag, player_data);
    if (win_flag[0] == 'l')
        return;
    int max_index = 0;
    double max_value = player_data[0].v;
    for (int i = 1; i < 5; ++i) {
        if (player_data[i].v > max_value) {
            max_value = player_data[i].v;
            max_index = i;
        }
    }
    printf("%s\n", player_data[max_index].id);
}

void solve() {
    half_solve();
    half_solve();
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--)
        solve();
}
