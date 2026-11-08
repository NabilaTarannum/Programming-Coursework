#include <stdio.h>

int main()
{
    int ar[500];
    /* scanf("%d", &ar[0]);
    scanf("%d", &ar[1]);
    scanf("%d", &ar[2]);
    scanf("%d", &ar[3]);
    scanf("%d", &ar[4]);

    printf("%d\n", ar[0]);
    printf("%d\n", ar[1]);
    printf("%d\n", ar[2]);
    printf("%d\n", ar[3]);
    printf("%d\n", ar[4]); */

    for (int i = 0; i < 500; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < 500; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
