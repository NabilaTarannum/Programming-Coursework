#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;

typedef pair<int, int> my_queue;

int main()
{
    Queue <my_queue> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c1, c2;
        cin >> c1 >> c2;
        q.push(make_pair(c1, c2));
    }

    my_queue chk;
    // while (!q.empty())
    // {
    //     chk = q.pop();
    //     cout << chk.first << " | " << chk.second << endl;
    // }

    if (!q.empty())
    {
        chk = q._front();
        cout << chk.first << " | " << chk.second << endl;
    }

    if (!q.empty())
    {
        chk = q.back();
        cout << chk.first << " | " << chk.second << endl;
    }

    return 0;
}