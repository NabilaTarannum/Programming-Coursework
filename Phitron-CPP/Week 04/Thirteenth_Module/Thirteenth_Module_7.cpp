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
    int size_;
    cin >> size_;

    int arr[size_];
    for (int i = 0; i < size_; i++)
        cin >> arr[i];

    cout << "Before Insertion Sort : ";
    printArray(arr, size_);
    cout << endl;

    // Insertion sort --> O(n^2)

    for (int i = 1; i < size_; i++) // when sorted O(n) when unsorted O(n^2)
    {
        int key = arr[i]; // -----------> n-1
        cout << endl << "i : " << i << ", Key : " << key << endl;
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            printArray(arr, size_);
            j--;
        }
        arr[j + 1] = key;
        printArray(arr, size_);
        cout << endl;
    }

    cout << "After Insertion Sort : ";
    printArray(arr, size_);
    cout << endl;


    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Before Bubble Sort : ";
    printArray(array, size);
    cout << endl;

    // Bubble Sort Implementation --> O(n^2)

    for (int i = 1; i < size; i++) // when sorted O(n) when unsorted O(n^2)
    {
        int flag = 0;
        cout << "Iteration no : " << i << endl;
        for (int j = 0; j < size - i; j++) // ------> n-1
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
            printArray(array, size);
        }
        cout << endl;
        if (flag == 0)
            break;
    }

    cout << "After Bubble Sort : ";
    printArray(array, size);
    cout << endl;
    return 0;
}