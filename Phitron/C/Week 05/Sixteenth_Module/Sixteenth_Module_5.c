#include <stdio.h>

int getMin(int a, int b) {
    /* int temp;
    if (a < b) 
        temp = a;
    else 
        temp = b;
    return temp; */
    if (a < b) 
        return a;
    else 
        return b;
}

int main() {
    /* int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // int temp;
    // if (a < b)
    //     temp = a;
    // else
    //     temp = b;

    // int temp2;
    // if (temp < c)
    //     temp2 = temp;
    // else
    //     temp2 = c;

    int temp = getMin(a, b);
    int temp2 = getMin(temp, c);
    printf("Min value is %d" , temp2); */

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int ans = a[0];
    for (int i = 0; i < n; i++)
        ans = getMin(ans, a[i]);
    printf("%d", ans);
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
