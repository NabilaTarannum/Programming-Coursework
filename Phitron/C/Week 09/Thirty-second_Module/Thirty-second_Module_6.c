#include <stdio.h>

void make_sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d\n", sum);
}

void take_array(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    // make_sum();

    int test;
    scanf("%d", &test);

    /* for (int t = 1; t < test; t++)
    {
        take_array();
    } */

    while (test--)
    {
        take_array();
    }
    return 0;
}
