#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int _value)
    {
        this->value = _value;
        this->next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;

    public:
    Queue()
    {
        front = rear = NULL;
    }

    // enqueue --> push ()

    void push(int value)
    {
        Node *newNode = new Node(value);
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = rear->next;
    }

    // dequeue --> pop ()

    // peek --> front () -> back ()

    // empty --> empty ()
};

int main()
{
    return 0;
}