#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st = "aaa ab     bb aa az    z";
    stringstream stream;
    stream << st;

    string w;
    while (stream >> w)
    {
        cout << w << endl;
    }
    return 0;
}