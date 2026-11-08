#include<stdio.h>

int main() {
    // int a = 30, b = 20;

    // // int max_ab = a > b ? a : b;
    // int min_ab = a < b ? a : b;

    // /* if (a > b) {
    //     max_ab = a;
    // }
    // else {
    //     max_ab = b;
    // } */

    // printf("%d", min_ab);
    
    /* int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int water_left = a - b;

    if (water_left >= c) {
        printf("0");
    }
    else {
        c -= water_left;
        printf("%d", c);
    } */

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int water_left = a - b;
    int water_poured = water_left < c ? water_left : c;

    c -= water_poured; 

    printf("%d", c);

    return 0;
}