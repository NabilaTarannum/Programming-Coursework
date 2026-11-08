#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, i, j;
    cin >> row >> col;
    int arr[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (row != col)
    {
        cout << "No" << endl;
        return 0;
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                // cout << arr[i][j] << " ";
                continue;
            }
            if (arr[i][j] > 0)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    // scalar matrix
    int save;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (i == 0 && j == 0)
                {
                    save = arr[i][j];
                }
                else
                {
                    if (arr[i][j] != save)
                    {
                        cout << "Not scalar" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Scalar" << endl;
    cout << save << endl;
    return 0;
}