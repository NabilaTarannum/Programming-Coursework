#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int price = -1;
    printf("%u", price);

    /* long long lim = 10000000000000;
    printf("%lld\n", lim);
    printf("%ld\n", LONG_MIN); */

    /* short int a = 10000;
    printf("%d\n", a);
    printf("%d\n", SHRT_MAX); */

    /* printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN); */

    /* int p10 = 1;

    for (int i = 0; i <= 10; i++) {

            printf("%d\n", p10);
        p10 *= 10;
    } */
    return 0;
}
/*
    int
            -2^31          to        2^31-1
            -2147483648              2147483647

    unsigned int
            0        to        4e9
            0        to        4294967295

    short int / short
            -2^15   to   2^15-1
            -32768  to   32767
    long long int / long long
            -2^63          to         2^63
            -9223372036854775808    to     9223372036854775807
*/