#include <stdio.h>
#include <stdlib.h>

int sod(int x)
{
    int sum = 0;
    while (x)
    {
        int d = x % 10;
        x /= 10;
        sum += d;
    }
    return sum;
}

/* void div(int x, int y, int *vagfol, int *vagshesh)
{
    *vagfol = x / y;
    *vagshesh = x % y;
} */

/* void makeNsquare(int n, int square[])
{
    for (int i = 0; i < n; i++)
    { 
        square[i] = i * i;
    }
} */

int* makeNsquare(int n)
{
    int *square = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        square[i] = i * i;
    }
    return square;
}

int main()
{
    // printf("%d\n", sod(1234));

    // int vagfol, vagshesh;
    // div(7, 3, &vagfol, &vagshesh);
    // printf("%d %d\n", vagfol, vagshesh);

    int n;
    scanf("%d", &n);

    int *sq;
    sq = makeNsquare(n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sq[i]);
    }
    return 0;
}
