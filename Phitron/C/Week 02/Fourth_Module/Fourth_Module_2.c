#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 7, b = 8;

    bool condition = a * 2 != b - 2;

    printf("%d\n", condition);

    if (condition) {
        printf("true\n"); 
    }
    else {
        printf("false\n");
    }
    // <, <=, >, >=, ==, !=

    int comp = (a < b);
    printf("comp = %d\n", comp);

    if (comp) {
        printf("comp is true\n");
    }
    else {
        printf("comp is false\n");
    }
    return 0;
}