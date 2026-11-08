#include <stdio.h>

void divide(int x, int y, int *vagfol, int *vagshesh)
{
    *vagfol = x / y;
    *vagshesh = x % y;
}

struct Result
{
    int vagfol;
    int vagshesh;
};

struct Result Divide(int x, int y)
{
    struct Result result;
    result.vagfol = x / y;
    result.vagshesh = x % y;
    return result;
}

struct Result divide_(int x, int y)
{
    return (struct Result){x / y, x % y};
};

int main()
{
    int a = 10, b = 3;

    // int vagfol, vagshesh;
    // divide(a, b, &vagfol, &vagshesh);

    // struct Result result = Divide(a, b);

    struct Result result = divide_(a, b);

    printf("%d %d\n",result.vagfol, result.vagshesh);

    return 0;
}
