#include <stdio.h>

int main()
{
    const int a = 100;
    const int *const p = &a;
    printf("%d\n", a);
    return 0;
}
