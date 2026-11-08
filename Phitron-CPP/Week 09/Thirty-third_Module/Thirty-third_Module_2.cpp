#include <iostream>
using namespace std;

/* Problem link - https://leetcode.com/problems/middle-of-the-linked-list/ */

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
    ListNode *middleNode(ListNode *head)
    {
        int sz = list_size(head);
        int mid = sz / 2;
        for (int i = 1; i <= mid; i++)
        {
            head = head->next;
        }
        return head;
    }
};

int main()
{
    return 0;
}
