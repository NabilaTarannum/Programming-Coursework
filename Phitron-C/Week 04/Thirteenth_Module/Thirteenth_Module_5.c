#include <stdio.h>
#include <string.h>

int main() {
    /* char a[] = "Hello";
    char b[] = "world";

    int lena = strlen(a);
    int lenb = strlen(b);
    int lenc = lena + lenb;
    char c[lenc+1];

    for (int i = 0; i < lena; i++)
        c[i] = a[i];

    for (int i = 0; i < lenb; i++)
        c[lena + i] = b[i];

    c[lena + lenb] = '\0';
    printf("%s", c); */

    /* char a[100] = "Hello";
    char b[100] = "world";

    int lena = strlen(a);
    int lenb = strlen(b);

    for (int i = 0; i < lenb; i++)
        a[lena + i] = b[i];
    a[lena + lenb] = '\0';
    printf("%s", a); */

    /* char a[100] = "Hello";
    char b[100] = "world";

    strcat(a, b);
    printf("%s", a); */

    char a[100] = "Hello";
    char b[100] = "world";

    strncat(a, b, 4);
    a[9] = '\0';
    printf("%s", a);
    return 0;
}
