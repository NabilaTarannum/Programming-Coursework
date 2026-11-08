#include <stdio.h>
#include <string.h>

int main() {
    /* char str[100] = "Hello World";

    int sz = sizeof(str) / sizeof(str[0]);
    printf("%d\n", sz);

    int idx = 0;
    while (str[idx] != '\0')
        idx++;
    printf("Lenth = %d\n", idx); */

    char str[100] = "Hello World";

    int len = strlen(str);
    printf("Lenth = %d\n", len);
    return 0;
}
