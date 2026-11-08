#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st = "abcdefghij";
    // string::iterator it;
    // for (it = st.begin(); it != st.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // for (string::reverse_iterator it = st.rbegin(); it != st.rend(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (auto it = st.rbegin(); it != st.rend(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}