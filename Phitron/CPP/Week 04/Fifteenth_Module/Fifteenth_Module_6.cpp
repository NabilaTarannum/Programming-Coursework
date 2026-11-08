#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
    // Constructor creation
    Node(int _value)
    {
        this->value = _value;
        Next = NULL;
    }
};

void display(Node *node)
{
    while (node != NULL)
    {
        cout << node->value;
        if (node->Next != NULL)
            cout << " -> ";
        node = node->Next;
    }
    cout << endl << endl;
}

void insertAtTail(Node *&head, int _value)
{
    Node *newNode = new Node(_value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->Next != NULL)
        temp = temp->Next;
    temp->Next = newNode;
}

void insertAtHead(Node *&head, int _value)
{
    // s1 : create new node
    Node *newNode = new Node(_value);
    // s2 : update new node's next to head
    newNode->Next = head;
    // s3 : update head's
    head = newNode;
} 

int main()
{
    Node *head = NULL;

    int n;
    // Choice 1 : Insertion at head
    // Choice 2 : Insertion at tail
    cout << "Choice 1 : Insertion at head" << endl << "Choice 2 : Insertion at tail" << endl << "Choice 3 : Exit" << endl;
    int choice = 1;
    while (choice == 1 || choice == 2)
    {
        cout << "Enter the value : ";
        cin >> n;
        if (choice == 1)
            insertAtHead(head, n);
        else if (choice == 2)
            insertAtTail(head, n);
        cout << "Next choice (1/2) ? : ";
        cin >> choice;
    }

    display(head);
    return 0;
}