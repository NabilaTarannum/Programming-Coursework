#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 4, 1, 5, 6}, n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int a = 10, b = 20;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}