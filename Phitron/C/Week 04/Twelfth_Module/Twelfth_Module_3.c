#include <stdio.h>

int main() {
    /* double values[10];
    for (int i = 0; i < 10; i++)
        values[i] = i + 1;

    for (int i = 0; i < 10; i++)
        printf("%lf\n", values[i]); */

    /* double values[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
        printf("%lf\n", values[i]); */

    /* double values[] = {1, 2, 3, 4, 5};

    int sz = sizeof(values) / sizeof(values[0]);
    printf("Size = %d\n", sz);
    for (int i = 0; i < sz; i++)
        printf("%lf\n", values[i]); */

    /* double values[] = {1, 2, 3, 4, 5};
    double values0[7] = {1, 2, 3, 4, 5};
    double values1[4] = {1, 2, 3, 4, 5};

    int sz = sizeof(values0) / sizeof(values0[0]);
    printf("Size = %d\n", sz);
    for (int i = 0; i < sz; i++)
        printf("%lf\n", values0[i]); */

    char word[] = {'h', 'e', 'l', 'l', 'o'};

    int sz = sizeof(word)/sizeof(word[0]);

    for (int i = 0; i < sz; i++)
        putchar(word[i]);

    return 0;
}

/* 
    TYPE name[SIZE] = {VALUE0, VALUE1, .........}
    initializer list 
*/
