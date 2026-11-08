#include <stdio.h>

int main() {
    /* for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    } */
    /* int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    } */

    int money = 0;
    int target = 100;

    while (money < target) {
        printf("Need more money. Enter amount: ");
        int given;
        scanf("%d", &given);
        money += given;
        printf("Current money = %d\n", money);
    }
    return 0;
}
/* 
    while (condition) {
        statement;
    }
    for (init_expression; condition; loop_expression) {
        statements;
    }
*/