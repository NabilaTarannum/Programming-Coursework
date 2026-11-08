#include <stdio.h>

int main() {
    /*
    int n;
    scanf("%d", &n);
    
    int sum = 11;
    
    for (int i = 1; i <= n; i++){
        sum += 2*i;
        printf("i = %d, sum = %d\n", i, sum);
    }
    printf("final sum = %d\n", sum);
    */

    int n;
    scanf("%d", &n);

    printf("****************\n");

    for (int i = 0; i < n -2; i++){
        printf("*              *\n");
    }
    
    printf("****************\n");

    return 0;
}