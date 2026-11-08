#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int a[5] = {5, 4, 3, 2, 1};
    sort(a, a + n);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}