#include <stdio.h>

int main()
{
    long long age1, age2;
    scanf("%lld %lld", &age1, &age2);

    int years = 0;
    while (age1 <= age2)
    {
        age1 *= 3;
        age2 *= 2;
        years++;
    }
    printf("%d", years);
    return 0;
}