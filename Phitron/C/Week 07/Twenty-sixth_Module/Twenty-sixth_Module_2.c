#include <stdio.h>
#include <stdlib.h>

void makeNarray(int n, int out[])
{
    for (int i = 0; i < n; i++)
    {
        out[i] = i + 1;
    }
}

int *_makeNarray(int n)
{
    int *out = (int*)malloc(sizeof(int));
    for (int i = 0; i < n; i++)
    {
        out[i] = i + 1;
    }
    return out;
}

struct ArrayHolder
{
    int array[100];
};

struct ArrayHolder MakeNarray(int n)
{
    struct ArrayHolder ans;
    for (int i = 0; i < n; i++)
    {
        ans.array[i] = i + 1;
    }
    return ans;
}

int main()
{
    int n = 10;

    // int a[n];
    // makeNarray(n, a);

    // int *a = _makeNarray(n);

    struct ArrayHolder ans = MakeNarray(n);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans.array[i]);
    }
    return 0;
}
