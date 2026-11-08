#include <iostream>
#include <climits>
#include "Stack.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Stack<int> st;
    Stack<int> minStack;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min)
        {
            minStack.push(arr[i]);
            min = arr[i];
        }
        st.push(arr[i]);
    }

    while (!st.isEmpty())
    {
        if (minStack.Top() != st.Top()) // If Top of minStack and st is equal
        {
            st.pop();
            cout << minStack.Top() << " ";
        }
        else // Else
        {
            cout << minStack.Top() << " ";
            minStack.pop();
            st.pop();
        }
    }
    cout << endl << endl;

    return 0;
}