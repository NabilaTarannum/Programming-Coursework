#include <stdio.h>

int main() { 
    /* for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0) continue;  
        printf("%d ----> ", i);

        for (int j = 1; j < 10; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    } */

    /* for (int i = 1; i <= 10; i++)
    {
        if (i % 3 != 0) {
            printf("%d ----> ", i);

            for (int j = 1; j < 10; j++)
            {
                printf("%d ", i * j);
            }
            printf("\n");
        }
    } */

    int num = 1234;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        num /= 10;
        if (digit % 2)
            continue;
        sum += digit;
    }
    printf("%d", sum);
    return 0;
}