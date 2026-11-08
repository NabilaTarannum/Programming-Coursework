#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    /* int index = 0;

    while (str1[index] != '\0')
    {
        index++;
    }
    printf("Length of str1 -> %d\n", index);

    index = 0;
    while (str2[index] != '\0')
    {
        index++;
    }
    printf("Length of str2 -> %d\n", index); */

    int lenght1 = strlen(str1);
    printf("Length of str1 -> %d\n", lenght1);

    int lenght2 = strlen(str2);
    printf("Length of str2 -> %d\n", lenght2);
    return 0;
}
