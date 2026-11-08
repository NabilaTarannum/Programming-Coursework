#include <stdio.h>

/* int make_sum(int a, int b)
{
    return a + b;
} */

int make_Sum(int a, int b)
{
    int sum = a + b;
    sum *= 2;
    sum -= 100;
    sum += 1000;
    return sum;
}

int main()
{
    int s = make_Sum(10, 15);
    int s_ = make_Sum(2, 25);
    printf("sum = %d %d\n", s, s_);
    return 0;
}
