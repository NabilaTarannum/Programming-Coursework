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
    while (temp -> Next != NULL)
        temp = temp -> Next;
    temp -> Next = newNode;
}

int main()
{
    Node *head = NULL;

    int n;
    char choice = 'Y';
    while (choice == 'Y')
    {
        cout << "Enter the value : ";
        cin >> n;
        insertAtTail(head, n);
        cout << "Do you want to continue (Y/N) ? : ";
        cin >> choice;
    }

    // insertAtTail(head, 1);
    // insertAtTail(head, 5);
    // insertAtTail(head, 8);
    // insertAtTail(head, 9);
    // insertAtTail(head, 10);

    display(head);
    return 0;
}