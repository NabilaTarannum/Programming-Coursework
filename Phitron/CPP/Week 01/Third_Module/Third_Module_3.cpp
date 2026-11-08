#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p = (int *) malloc(10 * sizeof(int));
    int *pt = (int *)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << pt[i] << endl;
    }
    free(p);

    cout << endl;

    int *ptr = new int[10]();
    for (int i = 0; i < 10; i++)
    {
        cout << ptr[i] << endl;
    }
    delete[] ptr;
    return 0;
}