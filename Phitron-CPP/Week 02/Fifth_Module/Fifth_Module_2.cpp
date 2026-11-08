#include <bits/stdc++.h>
using namespace std;

class Student
{
    public: 
        int x;
        void sayHi()
        {
            cout << "Hi " << x << endl;
        }

    private:
        int y;

    protected:
        int z;
};

int main()
{
    Student rahim;
    rahim.x = 10;
    rahim.sayHi();
    return 0;
}