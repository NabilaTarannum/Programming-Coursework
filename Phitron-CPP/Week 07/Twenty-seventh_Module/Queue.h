#include <iostream>
using namespace std;

template <typename N>
class NodeQueue
{
public:
    N value;
    NodeQueue *next;

    NodeQueue(N _value)
    {
        this->value = _value;
        this->next = NULL;
    }
};

template <typename Q>
class Queue
{
    NodeQueue<Q> *front;
    NodeQueue<Q> *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    // enqueue --> push ()

    void push(Q value)
    {
        NodeQueue<Q> *newNode = new NodeQueue<Q>(value);
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
        NodeQueue<Q> *delNode = front;
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