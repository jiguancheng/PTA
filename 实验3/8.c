//
// Created by jgc on 25-3-17.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int gender, height, weight, tar_height = 129, tar_weight = 25;
        scanf("%d%d%d", &gender, &height, &weight);
        if (gender)
            tar_height = 130, tar_weight = 27;
        if (height != tar_height)
            printf(height < tar_height ? "duo chi yu! " : "ni li hai! ");
        else
            printf("wan mei! ");
        if (weight != tar_weight)
            printf(weight < tar_weight ? "duo chi rou!\n" : "shao chi rou!\n");
        else
            printf("wan mei!\n");
    }
}
