#include <iostream>
#include <cmath>
using namespace std;

/* Problem link - https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/ */

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
    int list_size(ListNode *head)
    {
        int count = 0;
        while (head != NULL)
        {
            head = head->next;
            count++;
        }
        return count;
    }
    int getDecimalValue(ListNode *head)
    {
        int ans = 0;
        int sz = list_size(head);
        int power = pow(2, sz - 1);
        while (head != NULL)
        {
            if (head->val == 1)
            {
                ans += power;
            }
            head = head->next;
            power /= 2;
        }
        return ans;
    }
};

int main()
{
    return 0;
}
