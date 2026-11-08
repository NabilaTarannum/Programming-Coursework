/* Theory - https://tinyurl.com/22gbc9gs */

#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[50]; // 120 bytes
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Given Array : ";
    PrintArray(array, size);
    return 0;
}