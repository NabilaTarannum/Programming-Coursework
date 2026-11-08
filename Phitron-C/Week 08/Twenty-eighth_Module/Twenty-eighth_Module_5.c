#include <stdio.h>

int main()
{
    int ar[6] = {2, 1, 0, -5, 10, 5};

    // sum of Numbers
    int sum = 0;
    for (int i = 0; i < 6; ++i)
    {
        int val = ar[i];
        // printf("i -> %d, val -> %d\n", i, val);
        sum += val;
    }
    printf("sum -> %d\n", sum);

    // Min and max values
    int min = ar[0], max = ar[0];
    for (int i = 1; i < 6; ++i)
    {
        int val = ar[i];
        // printf("i -> %d, val -> %d\n", i, val);
        if (val < min)
        {
            min = val;
        }
        if (val > max)
        {
            max = val;
        }
    }
    printf("min -> %d, max -> %d\n", min, max);

    // Reverse the array
    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}
