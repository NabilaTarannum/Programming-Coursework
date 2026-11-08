#include <stdio.h>
#include <string.h>

int Strlen(char str[])
{
    int idx = 0;
    while (str[idx] != '\0')
    {
        idx++;
    }
    return idx;
}

int strLen(char str[])
{
    char *ptr = str;
    int ans = 0;
    while (*ptr != '\0')
    {
        ans++;
        ptr++;
    }
    return ans;
}

int StrLen(char str[])
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        ptr++;
    }
    return ptr - str;
}

void stringcat(char a[], char b[], char out[])
{
    int idx1 = 0, idx2 = 0, idx = 0;
    while (a[idx1] != '\0')
    {
        out[idx] = a[idx1];
        idx++;
        idx1++;
    }

    while (b[idx2] != '\0')
    {
        out[idx] = b[idx2];
        idx++;
        idx2++;
    }
    out[idx] = '\0';
}

void StringCat(char a[], char b[], char out[])
{
    char *ptr1 = a, *ptr2 = b, *ptr = out;
    while (*ptr1 != '\0')
    {
        *ptr = *ptr1;
        ptr++;
        ptr1++;
    }

    while (*ptr2 != '\0')
    {
        *ptr = *ptr2;
        ptr++;
        ptr2++;
    }
    *ptr = '\0';
}

int main()
{
    char str[] = "hello world";
    printf("%d\n", Strlen(str));

    printf("%d\n" , strLen(str));

    printf("%d\n", StrLen(str));

    char str0[100];
    char str1[100];

    scanf("%s %s", str0, str1);

    int sz = strlen(str0) + strlen(str1);
    char out[sz+1];

    stringcat(str0, str1, out);
    printf("%s\n", out);

    StringCat(str0, str1, out);
    printf("%s", out);

    return 0;
}
