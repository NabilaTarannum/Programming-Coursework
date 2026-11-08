#include <stdio.h>

int main()
{
    int ar[5] = {10, 20, 30, 40, 100};
    /* ar[0] = 10;
    ar[1] = 20;
    ar[2] = 30;
    ar[3] = 40;
    ar[4] = 100; */

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}
