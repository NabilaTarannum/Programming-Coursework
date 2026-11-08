#include <bits/stdc++.h>
#include "Stack.h"
using namespace std;

int precisionCalc(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

string infixToPrefix(string chk)
{
    reverse(chk.begin(), chk.end());
    Stack <char> st;
    string result;

    for (int i = 0; i < chk.length(); i++)
    {
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            result += chk[i];
        }
        else if (chk[i] == ')')
        {
            st.push(chk[i]);
        }
        else if (chk[i] == '(')
        {
            while (!st.isEmpty() && st.Top() != ')')
            {
                result += st.pop();
            }
            if (!st.isEmpty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.isEmpty() && precisionCalc(st.Top()) >= precisionCalc(chk[i]))
            {
                result += st.pop();
            }
            st.push(chk[i]);
        }
    }
    
    while (!st.isEmpty())
    {
        result += st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int prefixEvaluation(string chk)
{
    Stack<int> st;

    for (int i = chk.length() - 1; i >= 0; i--) // Check if the i th argument is a operand
    {
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            st.push(chk[i] - '0'); // integer
        }
        else // Check if the i th argument is a operator
        {
            int a = st.pop();
            int b = st.pop();
            switch (chk[i])
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
                break;
            case '^':
                st.push(pow(a, b));
                break;
            default:
                break;
            }
        }
    }
    return st.Top();
}

/* +*423
-+7*45+20 */

int main()
{
    string infix = "(7+(4*5))-(2+0)";
    string prefix;
    prefix = infixToPrefix(infix);
    cout << endl << prefix << endl << prefixEvaluation(prefix) << endl << endl;
    return 0;
}