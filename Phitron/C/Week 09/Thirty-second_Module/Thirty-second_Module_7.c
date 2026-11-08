#include <stdio.h>

// Global variables
int a;

void check(int a)
{
    a = 10;
}

void print(int var);

int main()
{
    int x = 100;
    /* check(x);
    printf("%d\n", x); */
    print(x);
    return 0;
}

void print(int var)
{
    printf("%d\n", var);
}
