#include <bits/stdc++.h>
using namespace std;

class DoublyNode
{
    public:
        int value;
        DoublyNode *Next;
        DoublyNode *Prev;
        // Constructor creation
        DoublyNode(int _value) {
            this->value = _value;
            Next = NULL;
            Prev = NULL; }
};

void display(DoublyNode *node)
{
    while (node != NULL)
    {
        cout << node->value;
        if (node->Next != NULL)
            cout << " ---> ";
        node = node->Next;
    }
    cout << "\n\n";
}

void display_reverse(DoublyNode *node)
{
    DoublyNode *temp = node;
    while (temp->Next != NULL)
        temp = temp->Next;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->Prev != NULL)
            cout << " <--- ";
        temp = temp->Prev;
    }
    cout << "\n\n";
}
    

void insertAtTail(DoublyNode *&head, int _value)
{
    DoublyNode *newNode = new DoublyNode(_value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    DoublyNode *temp = head;
    while (temp->Next != NULL)
        temp = temp->Next;
    temp->Next = newNode;
    newNode->Prev = temp;
}

void insertAtHead(DoublyNode *&head, int _value)
{
    DoublyNode *newNode = new DoublyNode(_value); // s1 : create new node
    head->Prev = newNode;                         // s2 : update new node's prev to head
    newNode->Next = head;                         // s3 : update new node's next to head
    head = newNode;                               // s4 : update head's
}

int countLength(DoublyNode *head)
{
    int count = 0;
    DoublyNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

int main()
{
    DoublyNode *head = NULL;

    int value;
    // Choice 1 : Insertion at head
    // Choice 2 : Insertion at tail
    // Choice 3 : Exit from program
    cout << "Choice 1 : Insertion at head\n" << 
            "Choice 2 : Insertion at tail\n" <<
            "Choice 3 : Reverse display\n" <<
            "Choice 0 : Exit\n\n" <<
            "Choice ? : ";
    int choice = 1;
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
            cout << "\nReverse Doubly Linked list : ";
            display_reverse(head);
            break;
        default:
            cout << "Wrong Choice" << endl;
            break;
        }
        cout << "Next Choice ? : ";
        cin >> choice;
    }

    cout << "\nDoubly Linked list : ";
    display(head);
    cout << "Length of doubly linked list : " << countLength(head) << endl;
    return 0;
}
