#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (arr[mid] == x)
            return mid; // ---> Center of the array
        else if (arr[mid] > x)
            return binarySearch(arr, x, lb, mid - 1); // ---> Left of the array
        else
            return binarySearch(arr, x, mid + 1, ub); // ---> Right of the array
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    char c;
    cout << "Do you want to Linear Search : (Y/N)  ";
    cin >> c;

    while (toupper(c) == 'Y')
    {
        int checkValue;
        cout << "Enter the value to Linear Search : ";
        cin >> checkValue;

        int flag = 0;

        // Linear Search : O(n)
        for (int i = 0; i < size; i++) // -------> n
        {
            if (arr[i] == checkValue) // --------> 1
            {
                flag = 1; // --------> 1
                cout << "Found at index : " << i << "  Position : " << i + 1 << endl; // --------> 1
            }
        }

        if (flag == 0)
            cout << "Not Found" << endl;
        cout << "Do you want to countinue Linear Search : (Y/N)";
        cin >> c;
    }

    // Binary Search : O(log n)
    int size_;
    cin >> size_;

    int arr_[size_];
    for (int i = 0; i < size_; i++)
        cin >> arr_[i];

    int check;
    cout << "Enter the value you want to Binary Search : ";
    cin >> check;

    int index = binarySearch(arr, check, 0, size_ - 1); // --------> log n

    if (index != -1)
        cout << "Index : " << index << " Position : " << index + 1 << endl;
    else
        cout << "Value not found" << endl;
    return 0;
}