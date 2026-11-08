#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
    if (!str || !*str)
        return str;
    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

int main()
{
    char a[100], b[100];
    scanf("%s", a);
    strcpy(b, a);
    strrev(b);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != b[i])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
