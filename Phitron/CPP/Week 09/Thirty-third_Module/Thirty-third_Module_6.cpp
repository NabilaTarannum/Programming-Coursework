#include <iostream>
using namespace std;

/* Problem link - https://leetcode.com/problems/merge-two-sorted-lists/ */

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
    ListNode *head = NULL;
    void insertAtTail(int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        ListNode *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *a = list1;
        ListNode *b = list2;
        while (a != NULL && b != NULL)
        {
            if (a->val <= b->val)
            {
                insertAtTail(a->val);
                a = a->next;
            }
            else
            {
                insertAtTail(b->val);
                b = b->next;
            }
        }
        while (a != NULL)
        {
            insertAtTail(a->val);
            a = a->next;
        }
        while (b != NULL)
        {
            insertAtTail(b->val);
            b = b->next;
        }
        return head;
    }
};

int main()
{
    return 0;
}
