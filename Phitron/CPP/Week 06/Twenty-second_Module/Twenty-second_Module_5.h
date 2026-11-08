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
    int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }

    void push(int value) // push O
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            top = newNode;
            count++;
            return;
        }
        else
        {
            top->next = newNode;
            newNode->prev = top;
            top = newNode;
            count++;
        }
    }

    int pop() // pop O
    {
        Node *delNode = top;
        int chk = -1;
        if (head == NULL)
        {
            cout << "Stack Underflow" << endl;
            return chk;
        }
        if (top == head)
        {
            head = top = NULL;
            // return delNode->value;
        }
        else
        {
            top = delNode->prev;
            top->next = NULL;
            // return delNode->value;
        }
        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }

    bool isEmpty() // isEmpty
    {
        if (head == NULL)
            return true;
        else
            return false;
    }

    int size() // size
    {
        return count;
    }

    int Top() // top
    {
        int chk;
        if (top == NULL)
        {
            cout << "Stack Underflow | There is no top node" << endl;
            chk = -1;
        }
        else
            chk = top->value;
        return chk;
    }
};
