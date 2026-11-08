#include <stdio.h>

int make_sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}

int main()
{
    int sum = make_sum();
    printf("%d\n", sum);
    return 0;
}
