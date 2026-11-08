/* Theory - https://tinyurl.com/29fxkjbk */

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

    // size - 1 ----> pos
    int pos, value;
    cout << "Position of the Insertion : ";
    cin >> pos;
    cout << "Value of the Insertion : ";
    cin >> value;

    if (pos < 0 || pos > size)
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        // for (int i = size - 1; i >= pos; i--)
        // {
        //     array[i + 1] = array[i];
        // }
        
        // size ---> pos
        array[size] = array[pos];
        array[pos] = value;
        cout << "After Insertion : ";
        PrintArray(array, size + 1);
    }
    return 0;
}