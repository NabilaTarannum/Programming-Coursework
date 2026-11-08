#include <stdio.h>

/* int sum(int n, int a[])
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        a[i]++;
    }
    n++;
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int ret = sum(n, arr);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", n); */

void makeSquares(int n, int ans[])
{
    for (int i = 0; i < n; i++)
    {
        ans[i] = (i + 1) * (i + 1);
    }
    // return ans;
}

int main()
{
    int n = 5;
    int ans[n];
    makeSquares(n, ans);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}
