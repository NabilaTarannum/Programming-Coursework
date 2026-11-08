#include <stdio.h>
#include <string.h>

void send(int *ptr, int *ptr2)
{
    *ptr = 100;
    *ptr2 = 200;
}

int *Send()
{
    int ar[2] = {1, 2};
    return ar;
}

void send_(int *ar)
{
    int sz = strlen(ar);
    printf("%d\n", sz);
}

int main()
{
    /* int x, y;
    x = Send();
    printf("%d %d\n", x, y); */

    char ar[5] = "Hello";
    send_(ar);
    return 0;
}
