#include <stdio.h>
#include <string.h>

int main() {
    int *ptr;

    char str[] = "Hello";

    char *first = str;
    char *ch = strchr(str, 'o');

    // printf("%p\n", ch);
    // printf("%p %lld %d\n", ch, ch, *ch);
    // printf("%ld", ch - first);

    if (!ch) 
        printf("Found null. No occurrence");
    else 
        printf("Found");
    return 0;
}
