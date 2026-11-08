#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st = "abcdefghij"; // dynamic array
    cout << st.length() << endl;
    cout << st << " " << st.size() << endl;
    st.resize(4);
    cout << st << " " << st.size() << endl;
    st.clear();
    cout << st << " " << st.size() << endl;
    if (st.empty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }
    return 0;
}