#include <stdio.h>

/* void printTriangularNumber(int k) {
    int sum = 0;
    for (int i = 1; i <= k; i++){
        sum += i;
    }
    printf("%dth triangular number is %d\n", k, sum);
}

int main() {
    int n;
    scanf("%d", &n);

    // int sum = 0;
    // for (int i = 1; i <= n; i++) {
    //     sum += i;
    // }
    // printf("%d", sum);

    printTriangularNumber(n);
    return 0;
} */

void printGcd(int x, int y)
{
    printf("Inputs: %d %d\n", x, y);
    while (y >0)
    {
        int temp = x % y;
        x = y;
        y = temp;
    }

    int gcd = x;
    printf("gcd = %d\n", gcd);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printGcd(n, m);
    return 0;
}

/*
return_type name(parameters) {
    // Code
}
1
1 + 2 = 3 
1 + 2 + 3 = 6

1, 3, 6, 10, 15
*/
