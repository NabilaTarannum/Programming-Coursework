#include <stdio.h>

int main() {
    /* char st[] = "This is a string.";

    int sz = sizeof(st) / sizeof(st[0]);
    printf("%d\n", sz);

    for (int i = 0; i < sz; i++)
        printf("%d -> %c (ASCII = %d)\n", i, st[i], st[i]); */

    /* char st[] = "This is on \n two lines";

    int sz = sizeof(st) / sizeof(st[0]);
    printf("%d\n", sz);

    for (int i = 0; i < sz; i++)
        printf("%d -> %c (ASCII = %d)\n", i, st[i], st[i]); */

    char st[] = "This is a string.\0";

    int sz = sizeof(st) / sizeof(st[0]);
    printf("%d\n", sz);

    st[6] = 'n';
    // st[6] = '\0';
    // st[6] = '0';
    // st[6] = 0;

    printf("%s", st);
    return 0;
}
