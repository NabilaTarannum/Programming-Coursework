#include <iostream>
#include "Stack.h"
using namespace std;

bool balancedParenthesis(string s)
{
    int n = s.size();
    Stack<char> st;
    bool isBalance = true;

    if (s[0] == ')' || s[0] == '}' || s[0] == ']')
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') // opening bracket -> ( { [
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.Top() == '(')
            {
                st.pop();
            }
            else
            {
                isBalance = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (st.Top() == '{')
            {
                st.pop();
            }
            else
            {
                isBalance = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (st.Top() == '[')
            {
                st.pop();
            }
            else
            {
                isBalance = false;
                break;
            }
        }
    }

    if (!st.isEmpty())
    {
        isBalance = false;
    }
    return isBalance;
}

int main()
{
    string chk;
    cin >> chk;
    if (balancedParenthesis(chk))
        cout << "Yes";
    else
        cout << "No";
    return 0;