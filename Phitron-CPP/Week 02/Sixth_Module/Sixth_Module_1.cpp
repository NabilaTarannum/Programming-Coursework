#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st = "abcd";
    st = "xyz";
    cout << st << endl;
    string s; // dynamic array
    // cin >> s;
    // cout << s << endl;
    cout << st.capacity() << endl;
    cout << st.max_size() << endl;
    string str(10, 'z');
    cout << str << endl;

    string st1 = "abcd";
        string st2 = "xyzz";
    // st1 = st2;
    // cout << st1 << endl;
    // // string n = st1 + st2;
    // st1 += st2;
    // cout << st1 << endl;

    if (st1 == st2)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }
    return 0;
}