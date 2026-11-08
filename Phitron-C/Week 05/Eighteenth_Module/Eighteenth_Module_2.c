#include <stdio.h>

void Rotate(int n, int a[]) {
    int first = a[0];
    for (int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    a[n - 1] = first;
}

void Rotate_by_k(int n, int a[], int k) {
    k = k % n;
    for (int i = 0; i < k; i++){
        Rotate(n, a);
        // printf("Iteration %d : ", i + 1);
        // for (int i = 0; i < n; i++) {
        //     printf("%d ", a[i]);
        // }
        // printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int k;
    scanf("%d", &k);
    // Rotate(n, a);
    Rotate_by_k(n, a, k);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}

/* 
a = {1, 2, 3, 4}
Rotate(a);
a -> {2, 3, 4, 1}

12 -> 5 10
12 -> 2
13 -> 3

n,
k, k % n
*/
