//
// Created by jgc on 25-3-31.
//
#include <stdio.h>

double get_gpa() {
    int n;
    scanf("%d", &n);
    double total_score = 0, performance = 0;
    for (int i = 0; i < n; i++) {
        double score, per;
        char result[10];
        scanf("%lf%s", &score, result);
        if (result[0] == 'N' || result[0] == 'P')
            continue;

        total_score += score;
        sscanf(result, "%lf", &per);
        performance += score * per;
    }
    return performance / total_score;
}

int main() {
    double a = get_gpa(), b = get_gpa();
    double delta = a - b;
    printf("%.2lf", delta > -0.005 && delta < 0 ? 0. : delta);
}