#include <bits/stdc++.h>
using namespace std;

class Example
{
    public:
        int x;
        Example(int a)
        {
            x = a;
        }
        // Example operator +(Example &obj)
        // {
        //     return Example(x + obj.x);
        // }

        int operator +(Example &obj)
        {
            return x + obj.x;
        }

        // Example operator +(Example obj)
        // {
        //     cout << x << " " << obj.x << endl;
        //     cout << obj.x << endl;
        //     // cout << x + obj.x << endl;
        //     Example ans(0);
        //     ans.x = x + obj.x;
        //     return ans;
        // }
};

class Parent
{
    public:
        void fun()
        {
            cout << "Parent" << endl;
        }
};

class Child: public Parent
{
    public:
        void fun()
        {
            cout << "Child" << endl;
        }
};

int main()
{
    Example a(10), b(20), c(30);
    // Example c = a + b;
    // cout << c.x << endl;
    // Example ans = a + b;
    // Example ans2 = ans + c;
    // cout << ans.x << endl;
    // cout << ans2.x << endl;

    // int ans_ = a + b;
    // Example ansobj(ans_);
    // cout << ansobj.x << endl;
    // cout << ansobj + c << endl;

    Parent pt;
    Child obj;
    obj.fun();
    pt.fun();
    return 0;
}