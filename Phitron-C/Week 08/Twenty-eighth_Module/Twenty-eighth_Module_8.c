#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    /* int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        int val = ar[i];
        if (val == 1)
        {
            count1++;
        }
        if (val == 2)
        {
            count2++;
        }
    }
    printf("count1 %d, count2 %d\n", count1, count2); */

    int count[11] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = ar[i];
        count[val]++;
    }
    for (int val = 1; val <= 10; val++)
    {
        if (count[val] > 0)
        {
            printf("value -> %d, count -> %d\n", val, count[val]);
        }
    }
    return 0;
}
