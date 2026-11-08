#include <bits/stdc++.h>
using namespace std;

namespace one
{
    int x = 10;
    void fun()
    {
        cout << "I am namespace one" << endl;
    }
}

namespace two
{
    int x = 20;
    void fun2()
    {
        cout << "I am namespace two" << endl;
    }
}

// using namespace one;
// using namespace two;

int main()
{
    // one::fun();
    // two::fun2();
    // fun();
    // fun2();

    cout << one::x << endl;
    cout << two::x << endl;

    return 0;
}