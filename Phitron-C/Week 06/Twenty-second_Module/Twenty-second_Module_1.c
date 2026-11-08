#include <stdio.h>
#include <stdlib.h>

void makeCopy(int n, int in[], int out[])
{
    for (int i = 0; i < n; i++)
    {
        out[i] = in[i];
    }
}

int *MakeCopy(int n, int in[])
{
    int *out = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        out[i] = in[i];
    }
    return out;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[n];
    makeCopy(n, a, b);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    int *t = MakeCopy(n, a);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", t[i]);
    }
    return 0;
}
