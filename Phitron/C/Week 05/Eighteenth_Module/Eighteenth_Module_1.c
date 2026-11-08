˝#include <stdio.h>

int max(int a, int b) {
    if (a < b) 
        return b;
    else       
        return a;
}

int getMax(int n, int a[]) {
    int ans = a[0];
    for (int i = 1; i < n; i++)
        ans = max(ans, a[i]);
    return ans;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = getMax(n, a);
    printf("%d", max);
    return 0;
}
