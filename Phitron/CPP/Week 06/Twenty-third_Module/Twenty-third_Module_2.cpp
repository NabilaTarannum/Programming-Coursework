#include <bits/stdc++.h>
#include "Stack.h"
using namespace std;

int main()
{
    Stack <pair <int,char>> st;
    st.push(make_pair(1, 'a'));
    st.push(make_pair(2, 'b'));
    st.push(make_pair(3, 'c'));
    st.push(make_pair(4, 'd'));
    st.push(make_pair(5, 'e'));

    // cout << st.pop() << endl;

    while (!st.isEmpty())
    {
        pair <int, char> chk = st.pop();
        // cout << st.pop() << endl;
        cout << chk.first << "|" << chk.second << endl;
    }

    cout << st.size() << endl;

    if (!st.isEmpty()) 
    {
        pair<int, char> chk = st.Top();
        // cout << st.pop() << endl;
        cout << chk.first << "|" << chk.second << endl;
    }

    // cout << st.Top() << endl; // st.Top() != -1

    return 0;
}