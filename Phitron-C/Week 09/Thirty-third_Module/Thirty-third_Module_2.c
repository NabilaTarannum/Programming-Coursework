#include <stdio.h>

int main()
{
    int a = 100;
    int *p = &a;
    int **q = &p;

    // printf("Value -> %d Address -> %p\n", a, &a);
    // printf("Value -> %p Address -> %p\n", p, &p);
    // printf("Value -> %p Address -> %p\n", q, &q);

    // printf("%d\n", a);
    // printf("%d\n", *p);
    // printf("%d\n", **q);

    *p = 5000;
    printf("%d\n", a);

    **q = 2000;
    printf("%d\n", a);
    return 0;
}
