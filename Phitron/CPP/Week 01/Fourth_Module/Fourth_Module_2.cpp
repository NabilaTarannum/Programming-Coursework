#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 4, col = 4;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // cout << "* ";
            // cout << i << " " << j << endl;
            // cout << i << "," << j << " ";
            cin >> a[i][j];
        }
        // cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}