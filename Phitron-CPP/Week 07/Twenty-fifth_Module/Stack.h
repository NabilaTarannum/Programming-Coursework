#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{
public:
    N value;
    Node *next, *prev;
    Node(N value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

template <typename S>
class Stack
{
    Node<S> *head, *top;
    int count = 0;

public:
    Stack()
    {
        head = top = NULL;
    }

    void push(S value)
    {
        Node<S> *newNode = new Node<S>(value);
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }

    S pop()
    {
        Node<S> *delNode = top;
        S chk;
        if (head == NULL)
        {
            cout << "Stack Underflow" << endl;
            return chk;
        }
        if (top == head)
            head = top = NULL;
        else
        {
            top = delNode->prev;
            top->next = NULL;
        }
        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }

    bool isEmpty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }

    int size()
    {
        return count;
    }

    S Top()
    {
        S chk;
        if (top == NULL)
            cout << "Stack Underflow | There is no top node" << endl;
        else
            chk = top->value;
        return chk;
    }

    S mid()
    {
        Node<S> *slow = head, *fast = head;
        if (head == NULL)
            cout << "There is no mid node" << endl;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->value;
    }
};