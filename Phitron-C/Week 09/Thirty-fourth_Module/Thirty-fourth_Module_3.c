#include <stdio.h>

void array_delete(int *a, int n, int pos)
{
    for (int i = pos + 1; i < n; i++)
        a[i - 1] = a[i];
}

int main()
{
    int ar[5] = {1, 2, 3, 4, 5};
    int pos;
    scanf("%d", &pos);
    array_delete(ar, 5, pos);

    for (int i = 0; i < 4; i++)
        printf("%d ", ar[i]);
    return 0;
}
