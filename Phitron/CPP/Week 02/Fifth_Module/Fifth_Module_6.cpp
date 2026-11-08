#include <bits/stdc++.h>
using namespace std;

class Parent
{
    private:
        int taka;
    protected:
        int password;
    public:
        Parent(int tk, int ps)
        {
            taka = tk;
            password = ps;
        }
        friend class AbburBondhu;
        friend void tellSecret(Parent *ptr);
};

class AbburBondhu
{
    public:
        void tellSecret(Parent *ptr)
        {
            cout << ptr -> password << endl;
        }
};

void tellSecret(Parent *ptr)
{
    cout << ptr -> taka << " " << ptr -> password << endl;
}

int main()
{
    Parent pt(1500, 2345);
    AbburBondhu bondhu;
    bondhu.tellSecret(&pt);

    tellSecret(&pt);
    return 0;
}