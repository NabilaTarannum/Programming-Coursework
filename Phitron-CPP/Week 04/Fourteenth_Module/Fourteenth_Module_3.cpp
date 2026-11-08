#include <iostream>
#include <climits>
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

    // Counting Sort --> O(n)

    cout << "Before Counting Sort : ";
    printArray(array, size);
    
    // Step 1 : Find the maximum element in the array
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }

    // Step 2 : Initialize the array with 0
    int count[max + 1];
    for (int i = 0; i <= max; i++)
        count[i] = 0;

    // Step 3 : Find the Frequency
    for (int i = 0; i < size; i++)
        count[array[i]]++;
    cout << "Frequency : ";
    printArray(count, max + 1);

    // Step 4 : Cummulative Sum
    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1];
    cout << "Cummulative Sum : ";
    printArray(count, max + 1);

    // Step 5 : Finalize the array --> Backward Traversal of Basic Array
    int final[size];
    for (int i = size - 1; i >= 0; i--)
    {
        count[array[i]]--;
        int k = count[array[i]];
        final[k] = array[i];
    }

    cout << "After Counting Sort : ";
    printArray(final, size);
    return 0;
}