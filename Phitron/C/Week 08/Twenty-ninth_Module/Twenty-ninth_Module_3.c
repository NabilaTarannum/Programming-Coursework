#include <stdio.h>
#include <string.h>

int main()
{
    // strlen()

    /* char ar[100];
    scanf("%s", ar);

    // int index = 0;
    // while (ar[index] != '\0')
    // {
    //     printf("%c", ar[index]);
    //     index++;
    // }
    // printf("%d\n", index);

    // int index = 0;
    // for (index = 0; ar[index] != '\0'; index++)
    //     printf("%d", index);
    // printf("%d", index);

    int length = strlen(ar);
    printf("%d", length); */

    // strcpy()

    /* char a[100], b[100];
    scanf("%s %s", a, b);
    strcpy(a, b);
    printf("%s %s\n", a, b); */

    // strcat()

    /* char a[100], b[100];
    scanf("%s %s", a, b);
    strcat(a, b);
    printf("%s %s\n", a, b); */

    // strcmp()

    char a[100], b[100];
    scanf("%s %s", a, b);
    int val = strcmp(a, b);
    printf("%d\n", val);

    return 0;
}
