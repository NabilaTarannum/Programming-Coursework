#include <stdio.h>

int main()
{
    char ar[16];
    // gets(ar);
    fgets(ar, 16, stdin);
    // scanf("%s", ar);

    for (int i = 0; i < 16; i++)
        printf("%c", ar[i]);

    // ar[2] = '\0';

    printf("\n%s", ar);
    return 0;
}
