#include <stdio.h>

int f(int a[])
{
    int sz = sizeof(a) / sizeof(a[0]);
    printf("%d\n", sz);
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /* for (int i = 0; i < 10; i++) {
        int *pai = &a[i];
        printf("%lld, %d\n", pai, *pai);
    }

    // int *pa = a;
    // printf("Array %lld\n", pa);

    // printf("Array %lld\n", a);

    // printf("Array Address: %lld\n, value = %d\n", a, *a);
    // printf("Array Address: %lld\n, value = %d\n", a + 5, *(a + 5));

    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n", *(a + i), a[i]);
    }

    int sz = sizeof(a);
    int sz2 = sizeof(&a[0]);
    printf("%d %d", sz, sz2); */

    int sz = sizeof(a) / sizeof(a[0]);
    printf("%d\n", sz);
    f(a);

    return 0;
}
