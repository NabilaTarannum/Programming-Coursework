#include <bits/stdc++.h>
using namespace std;

template <typename N> class Node
{
public:
    N value;
    Node *next;

    Node(N _value)
    {
        this->value = _value;
        this->next = NULL;
    }
};

template <typename Q>
class Queue
{
    Node <Q> *front;
    Node <Q> *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    // enqueue --> push ()

    void push(Q value)
    {
        Node <Q> *newNode = new Node <Q> (value);
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

    Q pop()
    {
        Q chk;
        if (rear == NULL)
        {
            cout << "Queue underflow | There is no element in the queue" << endl;
            return chk;
        }
        Node <Q> *delNode = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        chk = delNode->value;
        delete delNode;
        return chk;
    }

    // peek --> front () -> back ()

    Q _front()
    {
        return front->value;
    }

    Q back()
    {
        return rear->value;
    }

    // empty --> empty ()

    bool empty()
    {
        if (front == NULL && rear == NULL)
            return true;
        else
            return false;
    }
};