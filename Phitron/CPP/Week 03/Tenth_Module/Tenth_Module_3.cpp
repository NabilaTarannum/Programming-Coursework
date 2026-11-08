#include <bits/stdc++.h>
using namespace std;

// Linear Search algorithm

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    char c;
    cout << "Do you want to Search : (y/n) ";
    cin >> c;

    while(toupper(c) == 'Y')
    {
        int checkValue;
        cout << "Please enter the value you want to search : ";
        cin >> checkValue;

        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == checkValue)
            {
                flag = 1;
                cout << "Index No : " << i << "  Position : " << i + 1 << endl;
            }
        }
        if (flag == 0)
        {
            cout << "Value not found" << endl;
        }
        cout << "Do you want to Continue  Searching : (y/n) ";
        cin >> c;
    }
    return 0;
}