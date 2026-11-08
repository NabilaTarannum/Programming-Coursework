#include <iostream>
#include <stack>
using namespace std;

/* Problem link - https://leetcode.com/problems/implement-queue-using-stacks/ */

class MyQueue
{
public:
    stack<int> s1;
    MyQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        stack<int> s2;
        int ans;
        while (!s1.empty())
        {
            int val = s1.top();
            s1.pop();
            if (s1.empty())
            {
                ans = val;
                break;
            }
            s2.push(val);
        }
        while (!s2.empty())
        {
            int val = s2.top();
            s2.pop();
            s1.push(val);
        }
        return ans;
    }

    int peek()
    {
        stack<int> s2;
        int ans;
        while (!s1.empty())
        {
            int val = s1.top();
            s1.pop();
            if (s1.empty())
            {
                ans = val;
            }
            s2.push(val);
        }
        while (!s2.empty())
        {
            int val = s2.top();
            s2.pop();
            s1.push(val);
        }
        return ans;
    }

    bool empty()
    {
        return s1.empty();
    }
};

int main()
{
    return 0;
}
