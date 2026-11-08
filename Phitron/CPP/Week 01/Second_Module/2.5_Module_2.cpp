#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "one to ten : ";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "one to ten odd numbers : ";
    for (int i = 1; i <= 10; i+= 2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "one to ten even numbers : ";
    for (int i = 2; i <= 10; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "sum of even numbers : ";
    int sum = 0;
    for (int i = 2; i <= 10; i += 2)
    {
        sum += i;
    }
    cout << sum << endl << endl;

    cout << "one to ten : ";
    int i = 1;
    while (i <= 10)
    {
        cout << i << " ";
        i++;
    }
    return 0;
}