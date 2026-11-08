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
    char a[100], b[100], jogfol[100];
    scanf("%s %s", a, b);
    strrev(a);
    strrev(b);
    // printf("%s %s", a, b);
    int i = 0, j = 0, k = 0, hate = 0;
    while (i < strlen(a) && j < strlen(b))
    {
        int sum = (a[i] - '0') + (b[j] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        i++;
        j++;
        k++;
    }
    while (i < strlen(a))
    {
        int sum = (a[i] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        i++;
        k++;
    }
    while (j < strlen(b))
    {
        int sum = (b[j] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        j++;
        k++;
    }
    if (hate > 0)
        jogfol[k] = hate + '0';
    strrev(jogfol);
    printf("%s", jogfol);
    return 0;
}
