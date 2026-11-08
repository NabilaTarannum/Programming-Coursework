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
    // cout << "Position of the Insertion : ";
    cout << "Position of the Deletion : ";
    cin >> pos;
    // cout << "Value of the Insertion : ";
    // cout << "Value of the Deletion : ";
    // cin >> value;

    if (pos < 0 || pos > size - 1) // Insertion ----> size, Deletion ----> size - 1
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        // Insertion
        // // size - 1(4) ----> pos(2)
        // for (int i = size - 1; i >= pos; i--)
        // {
        //     array[i + 1] = array[i];
        // }

        // size ---> pos
        // array[size] = array[pos];
        // array[pos] = value;

        // Deletion
        if (pos == size - 1) size--; // last position
        else // start or middle position
        {
            // pos + 1 ----> size - 1
            for (int i = pos + 1; i < size; i++)
            {
                array[i - 1] = array[i];
            }
            size--;
        }

    }
    // cout << "After Insertion : ";
    // PrintArray(array, size + 1);
    cout << "After Deletion : ";
    PrintArray(array, size);
    return 0;
}