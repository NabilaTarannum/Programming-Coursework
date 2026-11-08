#include <stdio.h>
#include <string.h>

int main() {
    /* char str[] = "hello";
    char str2[10];

    int len = strlen(str);
    for (int i = 0; i < len; i++)
        str2[i] = str[i];

    printf("%s ", str2); */

    /* char str[] = "hello";
    char str2[10];

    int len = strlen(str);
    for (int i = 0; i < len; i++)
        str2[i] = str[i];
    str2[len] = '\0';

    printf("%s ", str2); */

    /* char str[] = "helloworld";
    char str2[10];

    int i = 0;
    while (str[i] != '\0') {
        str2[i] = str[i];
        i++;
    }
    // str2[i] = '\0';

    printf("%s ", str2); */

    /* char str[] = "helloworl";
    char str2[10];

    strcpy(str2, str);

    printf("%s ", str2); */

    char str[] = "helloworld";
    char str2[10];

    strncpy(str2, str, 9);
    str2[9] = '\0';

    printf("%s ", str2);

    return 0;
}
