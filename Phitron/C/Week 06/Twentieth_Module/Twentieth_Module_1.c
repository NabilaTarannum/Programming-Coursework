#include <stdio.h>

int main()
{
    /* int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    double reals[20];

    for (int i = 0; i < 10; i++)
    {
        printf("values[%d] = %d\n", i, values[i]);
    } */

    // for (int i = 0; i < 10; i++) {
    //     values[i] = i + 1;
    // }

    // values[3] = 100;
    // values[3] *= 2;

    // for (int i = 0; i < 10; i++) {
    //     printf("values[%d] = %d\n", i, values[i]);
    // }

    int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double reals[20];

    printf("%lu %lu\n", sizeof(int), sizeof(double));
    printf("%lu %lu\n", sizeof(values), sizeof(reals));

    int sz = sizeof(values) / sizeof(values[0]);
    printf("%d", sz);
    return 0;
}
