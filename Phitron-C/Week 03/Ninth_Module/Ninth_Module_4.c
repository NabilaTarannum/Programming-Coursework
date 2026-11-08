#include <stdio.h>
#include <ctype.h>

int main()
{
    /* char ch = 'A';
    printf("%c\n", ch);
    printf("%d", ch); */

    /* for (int i = 32; i <= 126; i++) {
        printf("%d\t%c\n", i, i);
    } */

    /* char ch;
    scanf("%c", &ch);

    if ('A' <= ch && ch <= 'Z') {
        printf("Uppercase");
    }
    else if ('a' <= ch && ch <= 'z') {
        printf("Lowercase");
    }
    else if ('0' <= ch && ch <= '9') {
        printf("digit");
    }
    else {
        printf("others");
    } */

    /* char ch;
    scanf("%c", &ch);

    if ('A' <= ch && ch <= 'Z')
    {
        int pos = ch - 'A';
        char lo = 'a' + pos;
        printf("Lower = %c", lo);
    }
    else
    {
        printf("not uppercase");
    } */

    /* char ch;
    scanf("%c", &ch);

    if ('A' <= ch && ch <= 'Z')
    {
        char lo =ch - 'A' + 'a';
        printf("Lower = %c", lo);
    }
    else
    {
        printf("not uppercase");
    } */

    char ch;
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("Lower = %c", tolower(ch));
    }
    else
    {
        printf("not uppercase");
    }

    return 0;
}
/* 
A -> 65
B -> 66
a -> 97
*/