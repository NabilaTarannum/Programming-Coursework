#include <stdio.h>

int main()
{
    int a = 10;
    printf("Address -> %p value -> %d\n", &a, a);
    int *p = &a;
    printf("Address -> %p value -> %p\n", &p, p);
    printf("Value of that address -> %d\n", *p);
    return 0;
}
