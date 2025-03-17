//
// Created by jgc on 25-3-17.
//
#include <math.h>
#include <stdio.h>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
#define abs(a) (a >= 0 ? a : -a)
#define deal_zero(a) (abs(a) < .05 ? 0 : a)

int main() {
    double a, b, c, d, e;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (!a && !b && !c) {
        printf("Zero Equation\n");
        return 0;
    }
    if (!a && !b && c) {
        printf("Not An Equation\n");
        return 0;
    }

    if (!a) {
        printf("%.2lf", deal_zero(-c / b));
        return 0;
    }
    d = b * b - 4 * a * c, e = -b / 2. / a;
    if (d == 0) {
        printf("%.2lf", deal_zero(e));
        return 0;
    }
    if (d > 0) {
        double t = sqrt(d) / 2. / a;
        double x = e + t, y = e - t;
        printf("%.2lf\n%.2lf", deal_zero(max(x, y)), deal_zero(min(x, y)));
    } else {
        double t = abs(sqrt(-d) / 2. / a);
        printf("%.2lf+%.2lfi\n%.2lf-%.2lfi", deal_zero(e), deal_zero(abs(t)), deal_zero(e), deal_zero(abs(t)));
    }
}
