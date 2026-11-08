#include <bits/stdc++.h>
using namespace std;

/* // Binary Search algorithm
int binary_search(int arr[], int l, int r, int key)
{
    // tabnine
    if (l >= r)
        return -1;
    else if (key < arr[l] || key > arr[r])
        return -1;
    else
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            return binary_search(arr, l, mid - 1, key);
        else
            return binary_search(arr, mid + 1, r, key);
    }

    // another

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }

    return -1;
} */

int binarySearch(int arr[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (arr[mid] == x)
            return mid; // Center of the array
        else if (arr[mid] > x)
            return binarySearch(arr, x, lb, mid - 1); // Left of the array
        else
            return binarySearch(arr, x, mid + 1, ub); // Right of the array
    }
    else
        return -1;
}

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int check;
    cout << "Enter the value you want to search : ";
    cin >> check;

    int index = binarySearch(arr, check, 0, size - 1);

    if (index != -1)
        cout << "Index : " << index << " Position : " << index + 1 << endl;
    else
        cout << "Value not found" << endl;
    return 0;
}