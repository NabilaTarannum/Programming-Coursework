#include <stdio.h>

void change(int *p, int x)
{
    // printf("%d\n", p);
    // printf("%d\n", *p);
    // printf("%d\n", *(p + 1));

    // *p = 1000;
    // *(p + 1) = 1000;
    *(p + 2) = 1000;
    x = -5000;
}

int main()
{
    int a[3] = {1, 2, 3};
    int k = 10;
    change(a, k);
    printf("%d %d %d\n", a[0], a[1], a[2]);
    printf("%d\n", k);
    return 0;
}
