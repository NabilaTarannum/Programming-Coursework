#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st = "abcdefghij", st_ = "abcd";
    st.assign("abcd");
    cout << st << endl;
    st += "efghij";
    cout << st << endl;
    st.append("klmn");
    cout << st << endl;
    st.push_back('o');
    cout << st << endl;
    st.pop_back();
    cout << st << endl;
    st.insert(1, "xyz");
    cout << st << endl;
    st.erase(1, 3);
    cout << st << endl;
    swap(st, st_);
    cout << st << " ";
    cout << st_ << endl;
    return 0;
}