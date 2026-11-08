#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 500, c = 250;
    if (a < b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
    if (a > b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }

    int mn = min(a, min(b, c));
    cout << mn << endl;
    int mx = max(a, b);
    cout << mx << endl;

    int ar[5] = {5, 2, 3, 1, 4};
    int mn0 = ar[0], mx0 = ar[0];
    for (int i = 1; i < 5; i++)
    {
        // if (ar[i] < min)
        // {
        //     min = ar[i];
        // }
        mn0 = min(mn0, ar[i]);
        cout << "index: " << i << " -> " << mn0 << endl;
    }

    cout << endl;

    for (int i = 1; i < 5; i++)
    {
        mx0 = max(mx0, ar[i]);
        cout << "index: " << i << " -> " << mx0 << endl;
    }
    cout << mn0 << endl;
    cout << mx0 << endl;
    return 0;
}