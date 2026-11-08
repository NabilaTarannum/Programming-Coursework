#include <stdio.h>

int main() {
    const int N = 20;
    const int *const pN = &N;
    // *pN = 10;

    printf("%p has value %d\n", pN, *pN);

    int m = 100;
    // pN = &m;

    printf("%p has value %d", pN, *pN);

    return 0;
}
