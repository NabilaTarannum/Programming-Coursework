#include <iostream>
#include <stack>
#include <queue>
using namespace std;

/* Problem link - https://leetcode.com/problems/palindrome-linked-list/ */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        stack<int> s;
        queue<int> q;
        while (head != NULL)
        {
            s.push(head->val);
            q.push(head->val);
            head = head->next;
        }
        while (!s.empty())
        {
            int x = s.top();
            int y = q.front();
            s.pop();
            q.pop();
            if (x != y)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    return 0;
}
