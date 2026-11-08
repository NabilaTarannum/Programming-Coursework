#include <stdio.h>

int main() {
    int n = 100;
    scanf("%d", &n);

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("Number of divisors = %d\n", count);
    return 0;
}