#include <stdio.h>
int main() {
    /* answer 6
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", x / y);
    return 0;*/

    // answer 7
    int height;
    printf("Enter Height in inches: ");
    scanf("%d", &height);

    int feet, inch;
    feet = height / 12;
    inch = height % 12;

    printf("Your Height is %d feet %d inches", feet, inch);

    return 0;
}
