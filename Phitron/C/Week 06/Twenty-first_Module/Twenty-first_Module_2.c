#include <stdio.h>
#include <stdbool.h>

int addone(int x)
{
    x += 1;
    return x;
}

void makePositive(double *x)
{
    if (*x < 0)
    {
        *x = -*x;
    }
}

int gcd(int x, int y)
{
    while (y != 0) 
    {
        int temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int findGcd(int sz, const int arr[])
{ 
    int ans = arr[0];
    for (int i = 1; i < sz; i++)
    { 
        ans = gcd(ans, arr[i]);
    }
    return ans;
}

void makeDouble(int sz, int arr[])
{ 
    for (int i = 0; i < sz; i++)
    { 
        arr[i] *= 2;
    }
}

int main()
{
    /* int x = 5;
    int y = addone(x);
    printf("%d %d\n", x, y); */

    /* while (true)
    {
        double x;
        scanf("%lf", &x);
        if (x == 0)
        {
            break;
        }
        if (x < 0)
        {
            x = -x;
        }
        makePositive(&x);
        printf("%lf\n", x);
    } */

    int arr[] = {4, 8, 12};
    makeDouble(3, arr);

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("%d", findGcd(3, arr));
    return 0;
}
