#include <bits/stdc++.h>
#include "Stack.h"

using namespace std;

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
    cout << endl << prefixEvaluation("-+7*45+20") << endl << endl;
    return 0;
}