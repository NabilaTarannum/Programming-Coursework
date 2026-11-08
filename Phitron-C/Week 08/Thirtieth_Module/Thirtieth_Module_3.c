#include <stdio.h>
#include <string.h>

int main()
{
    /* char a[100];
    scanf("%s", a);
    int i = 0, j = strlen(a) - 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            printf("No\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("Yes\n"); */

    char a[100];
    scanf("%s", a);
    int i = 0, j = strlen(a) - 1;
    int c = 0;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            printf("No\n");
            c = 1; 
            break;
        }
        i++;
        j--;
    }
    if (c == 0)
        printf("Yes\n");
    return 0;
}
