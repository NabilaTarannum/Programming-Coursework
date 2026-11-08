#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a, b;
    // cin >> a >> b;
    // cout << a << " " << b <<  endl;
    char s[50];
    cin.getline(s, 50);
    cout << s << endl;

    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}