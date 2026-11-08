#include <stdio.h>

int main() {
    /* int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
        printf("Add %d: New sum = %d\n", i, sum);
    }
    printf("Sum: %d\n", sum); */

    /* int sum = 0;
    for (int i = 1; i <= 29; i+=2)
    {
        sum += i;
        printf("Add %d: New sum = %d\n", i, sum);
    }
    printf("Sum: %d\n", sum); */

    /* int sum = 0;
    for (int i = 50; i >= 31; i--)
    {
        sum += i;
        printf("Add %d: New sum = %d\n", i, sum);
    }
    printf("Sum: %d\n", sum); */

    /* int sum = 0;
    for (int i = 50, j = 1; j <= 20; i--, j++)
    {
        sum += i;
        printf("j = %d: Add %d: New sum = %d\n", j, i, sum);
    }
    printf("Sum: %d\n", sum); */

    /* int sum = 0;
    for (int i = 2, j = 1; j <= 10; i+=3, j++)
    {
        sum += i;
        printf("j = %d: Add %d: New sum = %d\n", j, i, sum);
    }
    printf("Sum: %d\n", sum); */

    /* int sum = 0;
    for (int i = 100; i>0; i-=3)
    {
        sum += i;
        printf("Add %d: New sum = %d\n", i, sum);
    }
    printf("Sum: %d\n", sum); */

    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i*i;
        printf("Add %d: New sum = %d\n", i*i, sum);
    }
    printf("Sum: %d\n", sum);
    return 0;
}