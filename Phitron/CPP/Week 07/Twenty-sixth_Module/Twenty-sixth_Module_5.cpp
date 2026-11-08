#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;

int main()
{
    Queue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int chk;
        cin >> chk;
        q.push(chk);
    }

    // while (!q.empty())
    // {
    //     cout << q.pop() << " ";
    // }

    if (!q.empty())
    {
        cout << q._front() << endl;
    }

    if (!q.empty())
    {
        cout << q.back() << endl;
    }

    return 0;
}