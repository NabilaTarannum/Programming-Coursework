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
    cout << endl
         << endl;
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
        count++,
            head = head->Next;
    return count;
}

void insertionAtSpecificPosition(Node *&head, int position, int _value)
{
    int i = 0;
    Node *temp = head;
    while (i < position - 2)
        temp = temp->Next,
        i++;
    Node *newNode = new Node(_value);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}

int searchByValueUnique(Node *&head, int key)
{
    Node *temp = head;
    int count = 1;
    if (temp == NULL)
        return -1;
    while (temp->value != key)
    {
        if (temp->Next == NULL)
            return -1;
        temp = temp->Next,    
        count++;
    }
    return count;
}

int main()
{
    Node *head = NULL;

    int value, position;
    cout << "Choice 1 : Insertion at head" << endl
            << "Choice 2 : Insertion at tail" << endl
            << "Choice 3 : Insertion at Specific Position" << endl
            << "Choice 4 : Search a value (Unique list)" << endl
            << "Choice 0 : Exit" << endl
            << endl
            << "Choice (1/2/3/4/0) ? : ";
    int choice;
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
            case 1:
                cout << "Enter the value : ";
                cin >> value;
                insertAtHead(head, value);
                break;
            case 2:
                cout << "Enter the value : ";
                cin >> value;
                insertAtTail(head, value);
                break;
            case 3:
                cout << "Enter the Desired position : ";
                cin >> position;
                cout << "Enter the value : ";
                cin >> value;
                insertionAtSpecificPosition(head, position, value);
                break;
            case 4:
                cout << "Enter the value to Search : ";
                cin >> value;
                position = searchByValueUnique(head, value);
                if (position == -1)
                    cout << "Value not found" << endl;
                else
                    cout << "Value found at position " << position << endl;
                break;
            default:
                cout << "Wrong choice" << endl;
                break;
        }
        cout << "Next Choice (1/2/3/4/0) ? : ";
        cin >> choice;
    }

    cout << endl
            << "Linked List : ";
    display(head);
    cout << "Length of Linked List : " << countlength(head) << endl;
    return 0;
}