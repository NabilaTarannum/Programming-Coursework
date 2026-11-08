#include <stdio.h>

int square(int x)
{
    return x * x;
}

void printSquare(int x)
{
    printf("%d %d\n", x, square(x));
}

void sayHello()
{
    printf("Hello, world\n");
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

char getAt(int x)
{
    return 'A' + x - 1;
}

int main()
{
    /* printf("%d\n", max(10, 12));
    sayHello();
    for(int i = 0; i < 10; i++)
    {
        // printf("%d %d\n", i, square(i));
        printSquare(i);
    } */
    for (int i = 1; i <= 26; i++)
    {
        printf("%d %c\n", i, getAt(i));
    }
    return 0;
}
