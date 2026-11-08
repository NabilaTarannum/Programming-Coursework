#include <stdio.h>

int main() {
    /* int x;
    scanf("%d", &x);

    int sum = 0;
    while (x > 0) {
        int digit = x % 10;
        x /= 10;
        sum += digit;
        // printf("digit = %d x = %d\n", x, digit);
    }
    printf("Digit sum = %d\n", sum); */

    int x;
    scanf("%d", &x);

    int reverse = 0;
    while (x > 0)
    {
        int digit = x % 10;
        x /= 10;
        reverse = reverse * 10 + digit;
        // printf("digit = %d x = %d\n", x, digit);
    }
    printf("Reverse = %d\n", reverse);
    return 0;
}
/*
1234
125 -> 8

123456

6
5
4
3
2
1

1+2+3+4
 */