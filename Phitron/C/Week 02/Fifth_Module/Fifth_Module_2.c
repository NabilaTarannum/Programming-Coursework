#include <stdio.h>

int main() {
    for (int i=1, j=1; i+j<=10; i++, j++) {
        printf("%d %d\n", i, j);
    }
    return 0;
}

/*
for (starting code; continue condition; repeatation) {
    statements;
}

starting code;

loop:
    continue code
        true:
            statement
            repeation
        false:
            stop
*/