#include <bits/stdc++.h>
#include "Twenty-second_Module_5.h"
using namespace std;

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // cout << st.pop() << endl;

    // while (!st.isEmpty())
    // {
    //     cout << st.pop() << endl;
    // }

    cout << st.size() << endl;
    if (!st.isEmpty()) // st.Top() != -1
        cout << st.Top() << endl;

    return 0;
}