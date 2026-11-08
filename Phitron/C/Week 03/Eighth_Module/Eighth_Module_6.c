#include <stdio.h>

int main() { 
    /* int x = 4;

    while (x < 4) {
        scanf("%d", &x);
        printf("x is %d\n", x);
    } */

    /* int x = 4;

    do {
        scanf("%d", &x);
        printf("x is %d\n", x);
    } while (x < 4); */

    /* int x;

    while (1) {
        scanf("%d", &x);
        if (x %2 == 0) {
            break;
        }
    }
    printf("x is %d\n", x); */

    int x;

    do
    {
        scanf("%d", &x);
    } while (x % 2 != 0);
    printf("x is %d\n", x);

    return 0;
}
/* 
    while (condition) {
        statement;
    }

    do {
        statement;
    } while (condition);
*/