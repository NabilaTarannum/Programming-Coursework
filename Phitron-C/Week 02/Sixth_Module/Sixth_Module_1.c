#include <stdio.h>

int main() {
    /*
    int number;
    scanf("%d", &number);

    if (number %2 == 0) {
        printf("Number is even.");
    }
    else {
        printf("Number is odd.");
    }
    */

    int number;
    scanf("%d", &number);

    if (number < 0)
    {
        printf("-1");
    }
    else if (number > 0) {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}