#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    // printf("%lu\n", sizeof(ar)/sizeof(ar[0]));

    // memset(ar, 0, sizeof(ar));

    for (int i = 0; i < n; i++)
    {
        ar[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}
