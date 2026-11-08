#include <stdio.h>
#include <string.h>

int main() { 
    /* char a[100], b[100];
    scanf("%s %s", a, b);

    int idx = 0;

    while (a[idx] == b[idx] && a[idx] != '\0' && b[idx] != '\0') 
        idx++;

    if (a[idx] == '\0' && b[idx] == '\0')
        printf("Equal");
    else if (a[idx] == '\0' && b[idx] != '\0')
        printf("A is smaller");
    else if (a[idx] != '\0' && b[idx] == '\0')
        printf("B is smaller");
    else if (a[idx] < b[idx])
        printf("A is smaller");
    else
        printf("B is smaller"); */

    char a[100], b[100];
    scanf("%s %s", a, b);

    int val = strcmp(a, b);

    printf("%d", val);

    return 0;
}

/* 
< > =

12 < 14
14 > 12
13 == 13

Lexicographical

apple
apple
apples
apply

1. Find first mismatch
2. If both strings end, equal
3. If one string ends, that one is smaller
4. No stringd end, compare at position

strcmp:
    negetive -> 1st string smaller
    0 -> equal
    positive -> 2nd string smaller
*/
