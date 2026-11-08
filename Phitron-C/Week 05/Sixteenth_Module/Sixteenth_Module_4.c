#include <stdio.h>

int calcGcd(int x, int y)
{
    printf("Inputs: %d %d\n", x, y);
    while (y > 0)
    {
        int temp = x % y;
        x = y;
        y = temp;
    }

    int gcd = x;
    return gcd;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int g = calcGcd(n, m);

    printf("Gcd is %d\n", g);
    n /= g;
    m /= g;

    printf("Simplfied form: %d/%d\n", n, m);
    return 0;
}

/*
return_type name(parameters) {
    // Code
}
1
1 + 2 = 3
1 + 2 + 3 = 6

1, 3, 6, 10, 15
*/
