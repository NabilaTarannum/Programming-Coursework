#include <bits/stdc++.h>
#include "Stack.h"
using namespace std;

void insertAtBottom(Stack <int> &chk, int chkElement)
{
    if (chk.isEmpty())
    {
        chk.push(chkElement);
        return;
    }
    int topElement = chk.Top();
    chk.pop();
    insertAtBottom(chk, chkElement);
    chk.push(topElement);
}

void reverseStack(Stack <int> &chk)
{
    if (chk.isEmpty())
        return;
    int topElement = chk.Top();
    chk.pop();
    reverseStack(chk);
    insertAtBottom(chk, topElement);
}

int main()
{
    Stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);

    while (!st.isEmpty())
    {
        cout << st.pop() << " ";
    }
    return 0;
}