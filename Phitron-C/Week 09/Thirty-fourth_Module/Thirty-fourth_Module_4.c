#include <stdio.h>

void sort_2(int *a, int n)
{
    for(int pos = 0; pos < n; pos++)
    {
        for(int check = pos + 1; check < n; check++)
        {
            if(a[check] < a[pos])
            {
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
            }
        }
    }
}

void sort_20(int *a, int n)
{
    for (int pos = 0; pos < n; pos++)
    {
        for (int check = pos + 1; check < n; check++)
        {
            if (a[check] > a[pos])
            {
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
            }
        }
    }
}

int main()
{
    int ar[6] = {2, 5, 10, 3, 14, 20};
    sort_2(ar, 6);
    for (int i = 0; i < 6; i++)
        printf("%d ", ar[i]);

    printf("\n");

    sort_20(ar, 6);
    for (int i = 0; i < 6; i++)
        printf("%d ", ar[i]);
    return 0;
}
