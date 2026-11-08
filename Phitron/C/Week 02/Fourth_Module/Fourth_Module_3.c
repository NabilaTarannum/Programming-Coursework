#include <stdio.h>
#include <stdbool.h>

int main() {
    // 6 3 -> 6 is divisible by 3
    // 8 3 -> 8 is not divisible by 3
    // 7 0 -> You cannot divide by 0
    int a, b;
    scanf("%d %d", &a, &b);

    if (b != 0) {
        if (a % b == 0) {
            printf("%d is not divisible by %d\n", a, b);
        }
        else {
            printf("%d is not divisible by %d\n", a, b);
        }
    }
    else {
        printf("You cannot divide by 0\n");
    }

    // 2 -> positive
    // 0 -> zero
    // -3 -> negative
    int _a;
    scanf("%d", &_a);

    if (_a > 0) {
        printf("positive");
    }
    else if (_a == 0) {
        printf("zero");
    }
    else if (a == -1) {
        printf("minus 1");
    }
    
    else {
        printf("negative");
    }
    return 0;
}

