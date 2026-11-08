#include <bits/stdc++.h>
using namespace std;

class Example
{
    public:
        int add(int x, int y)
        {
            cout << "int add" << endl;
            return x + y;
        }
        double add(double x, double y)
        {
            cout << "double add" << endl;
            return x + y;
        }
        void add(char a)
        {
            cout << "char add " << a << endl;
        }
};

int main()
{
    Example ex;
    cout << ex.add(1.5, 2.2) << endl;
    ex.add('z');
    return 0;
}