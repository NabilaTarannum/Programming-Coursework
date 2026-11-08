#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    if (marks >= 40)
    {
        printf("You have passed\n");
        printf("Congrets\n");
    }
    else
    {
        printf("You have failed\n");
    }
    /*
        if (condition) {
            statements;
        }
        else {
            statements;
        }
    */

    int num;
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    printf("%d\n", num);

    /*
        15 -> 15
        -10 -> 10
        x = -10
        -x = 10
    */
    return 0;
}
