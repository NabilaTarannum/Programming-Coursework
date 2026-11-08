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

    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Before Sort : ";
    printArray(array, size);

    // Bubble Sort Implementation

    for (int i = 0; i < size; i++)
    {
        cout << "Iteration no : " << i << endl;
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            printArray(array, size - 1);
        }
    }

    cout << "After Sort : ";
    printArray(array, size);

    return 0;
}