#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello";
    char str1[] = {'h', 'e', 'l', 'l', 'o', '\0', 'w', 'o', 'r', 'l', 'd'};
    char str2[6];
    char str3[20] = "Test ";

    printf("%s %s\n", str, str1);
    printf("%lu %lu\n", strlen(str1), sizeof(str1) / sizeof(str1[0]));

    strcpy(str2, str);
    printf("%s\n", str2);

    strcat(str3, str);
    printf("%s\n", str3);

    int x = strcmp(str3, str);
    printf("%d\n", x);
    return 0;
}
