#include <stdio.h>

int main() {
    /* char str[] = "Hello world";
    printf("%s\n", str);
    puts(str); */

    printf("Enter your name : ");
    
    char name[10];
    fgets(name, 10, stdin);
    printf("Hello, %s\n", name);

    return 0;
}
/* 
    N          a       b       i       l       a              T      a     r        a       n       n       u       m
_________, _______, ______, ______, ______, ______, _____, _____, _____, ______, ______, ______, ______, ______, _____
*/
