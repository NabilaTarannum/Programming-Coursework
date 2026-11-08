#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
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
    Node *newNode = new Node(_value); // step 1 : create new node
    newNode->Next = head;             // step 2 : update new node's next to head
    head = newNode;                   // step 3 : update head's
}

int countlength(Node *&head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->Next;
    }
    return count;
}

int main()
{
    Node *head = NULL;

    int value;
    cout    << "Choice 1 : Insertion at head" << endl
            << "Choice 2 : Insertion at tail" << endl
            << "Choice 0 : Exit" << endl
            << endl
            << "Choice (1/2) ? : ";
    int choice = 1;
    cin >> choice;
    while (choice != 0)
    {
        cout << "Enter the value : ";
        cin >> value;
        switch (choice)
        {
        case 1:
            insertAtHead(head, value);
            break;
        case 2:
            insertAtTail(head, value);
            break;
        default:
            cout << "Wrong Choice" << endl;
            break;
        }
        cout << "Next Choice (1/2) ? : ";
        cin >> choice;
    }

    cout << endl << "Linked List : ";
    display(head);
    cout << "Length of Linked List : " << countlength(head) << endl;
    return 0;
}
