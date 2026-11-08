#include <stdio.h>
#include <string.h>

int getMin(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

void makeDouble(int n, int a[])
{
    for (int i = 0; i < n; i++)
        a[i] *= 2;
}

void reverseINT(int n, int a[]) // incopmlete
{
    for (int i = 0, j = 0; i < j; i++)
        int temp = a[i];
}

void reverse(char str[])
{
    int n = strlen(str);
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int getArryMin(int n, int a[])
{
    int min = a[0];
    for (int i = 0; i < n; i++)
        min = getMin(a[i], min);
    return min;
}

int main()
{
    /* int a[] = {4, 5, 3, 2, 5};
    makeDouble(5, a);
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]); */
    char str[] = "hello";
    reverse(str);
    printf("%s ", str);
    return 0;
}
