#include <stdio.h>

int main() {
    /* char ch = 'a';
    char *pch = &ch;

    printf("pch points to address %lld which contains %c\n", pch, *pch);

    pch++;
    printf("now pch address %lld\n", pch); */

    /* int number = 20;
    int *pnumber = &number;

    printf("pnumber points to address %lld which contains %d\n", pnumber, *pnumber);

    pnumber++;
    printf("now pch address %lld\n", pnumber); */

    /* double number = 100;
    double *pnumber = &number;

    printf("pnumber points to address %lld\n", pnumber);

    // pnumber++;
    pnumber--;
    printf("now pch address %lld\n", pnumber); */
    
    int val1, val2;
    int *pa = &val1;
    int *pb = &val2;

    printf("pa = %lld, %pb = %lld\n", pa, pb);
    printf("Difference  = %d", pa - pb);

    return 0;
}
