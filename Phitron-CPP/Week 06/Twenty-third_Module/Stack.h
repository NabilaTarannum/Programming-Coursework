#include <bits/stdc++.h>
using namespace std;

template <typename N> class Node
{
public:
    N value;
    Node *next;
    Node *prev;
    Node(N value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

template <typename S> class Stack
{
    Node <S> *head;
    Node <S> *top;
    int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }

    void push(S value) // push O
    {
        Node <S> *newNode = new Node <S> (value);
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

    S pop() // pop O
    {
        Node <S> *delNode = top;
        S chk;
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

    S Top() // top
    {
        S chk;
        if (top == NULL)
        {
            cout << "Stack Underflow | There is no top node" << endl;
        }
        else
            chk = top->value;
        return chk;
    }
};
