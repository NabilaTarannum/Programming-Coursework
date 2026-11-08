#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Before Sort : " << endl;
    printArray(arr, size);
    cout << endl;

    // Insertion sort

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        cout << endl << "i : " << i << ", Key : " << key << endl;
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            printArray(arr, size);
            j--;
        }
        arr[j + 1] = key;
        printArray(arr, size);
        cout << endl;
    }

    cout << "After Sort : " << endl;
    printArray(arr, size);
    cout << endl;
    return 0;
}