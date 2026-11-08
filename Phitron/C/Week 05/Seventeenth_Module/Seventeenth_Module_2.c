#include <stdio.h>

int main() {
    int value = 100;
    int *p = &value;

    printf("%d\n", value);
    printf("%p address has value %d\n", p, *p);

    value = 200;

    printf("%d\n", value);
    printf("%p address has value %d\n", p, *p);

    *p = 300;

    printf("%d\n", value);
    printf("%p address has value %d\n", p, *p);

    int value2 = 100;
    p = &value2;

    printf("%d\n", value);
    printf("%p address has value %d\n", p, *p);

    int v = 100;
    printf("%d", *&v);

    return 0;
}

/* 
* -> address -> value
& -> value -> address

value is same as *p

int * / char *
*/
