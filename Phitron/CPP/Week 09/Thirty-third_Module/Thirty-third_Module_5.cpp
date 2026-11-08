#include <iostream>
using namespace std;

/* Problem link - https://leetcode.com/problems/remove-duplicates-from-sorted-list/ */

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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            int x = temp->val;
            int y = temp->next->val;
            if (x == y)
            {
                ListNode *del = temp->next;
                temp->next = del->next;
                delete del;
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};

int main()
{
    return 0;
}
