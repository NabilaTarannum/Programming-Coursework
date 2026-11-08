#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Stack
{
    Node *head;
    Node *top;

    public:
        Stack()
        {
            head = NULL;
            top = NULL;
        }

        void push(int value) // push
        {
            Node *newNode = new Node(value);
            if (head == NULL)
            {
                head = newNode;
                top = newNode;
                return;
            }
            else
            {
                top->next = newNode;
                newNode->prev = top;
                top = newNode;
            }
        }
};

int main()
{
    return 0;
}