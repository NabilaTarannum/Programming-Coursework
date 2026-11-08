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
    int req_col;
    cin >> req_col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (j == req_col)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    int req_row;
    cin >> req_row;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == req_row)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}