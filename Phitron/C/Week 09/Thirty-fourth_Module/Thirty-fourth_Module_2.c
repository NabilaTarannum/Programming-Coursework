#include <stdio.h>

void insert(int *a, int n, int pos, int val)
{
    for (int i = n - 2; i >= pos; i--)
        a[i + 1] = a[i];
    a[pos] = val;
}

int main()
{
    int ar[6] = {1, 2, 3, 4, 5};
    int pos, val;
    scanf("%d %d", &pos, &val);
    insert(ar, 6, pos, val);
    for (int i = 0; i < 6; i++)
        printf("%d ", ar[i]);
    return 0;
}
