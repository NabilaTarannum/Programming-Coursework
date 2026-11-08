#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    /* printf("%d %p\n", *a, &a[0]);
    printf("%d\n", *a);
    printf("%d %d %d\n", *a, *(a + 1), *(a + 2));
    *(a + 1) = -100;
    printf("%d %d %d\n", a[0], a[1], 2[a]); */

    int *p = a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p));
        p++;
    }

    /* int a = 100;
    int *p = &a;
    printf("%lld %lld", p, (p + 1)); */

    /* char a = '0';
    char *p = &a;
    printf("%lld %lld", p, (p + 1)); */

    /* long long int a = '0';
    long long int *p = &a;
    printf("%lld %lld %lld", p, (p + 1), (p + 2)); */
    return 0;
}
