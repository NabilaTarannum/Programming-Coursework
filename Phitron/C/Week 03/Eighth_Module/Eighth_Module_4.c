#include <stdio.h>
#include <stdbool.h>

int main() {
    /* for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);

        if (i%8 == 5) {
            break;
        }
    } */

    /* while (true) { 
        int input = 0;
        scanf("%d", &input);
        printf("%d\n", input);

        if (input == 0) {
            break;
        }
    } */

    while (true)
    {
        int input = 0;
        scanf("%d", &input);

        if (input != 0 && input != 1)
        {
            printf("Invalid\n");
            break;
        }
    }
    return 0;
}
/*
    while (condition) {
        statement;
    }
    for (.......; condition; .......) {
        statement;
    }
    */