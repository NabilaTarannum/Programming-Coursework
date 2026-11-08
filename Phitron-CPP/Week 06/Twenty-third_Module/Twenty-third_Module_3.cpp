#include <bits/stdc++.h>
#include "Stack.h"
using namespace std;

int globalID = 100;

class person
{
    string name;
    int id;
    float salary;
    public:
        person()
        {
            name = "";
            id = -1;
            salary = 1.0;
        }

        void setName(string name)
        {
            this->name = name;
        }
        void setSalary(float salary)
        {
            this->salary = salary;
        }

        person(string name, float salary) 
        {
            setName(name);
            setSalary(salary);
            id = globalID;
            globalID++;
        }

        int getID()
        {
            return id;
        }
        string getName()
        {
            return name;
        }
        float getSalary()
        {
            return salary;
        }

        void print()
        {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Salary: " << salary << "\n" << endl;
        }
};

int main()
{
    Stack <person> st;
    person a ("John", 10000);
    person b ("Jane", 20000);
    person c ("Jack", 30000);

    st.push(a);
    st.push(b);
    st.push(c);

    // while (!st.isEmpty())
    // {
    //     person p = st.pop();
    //     p.print();
    // }

    person p = st.Top();
    p.print();

    cout << st.size() << endl;

    return 0;
}