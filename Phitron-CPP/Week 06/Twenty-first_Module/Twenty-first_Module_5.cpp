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

void insertAtTail(Node *&head, int _value)
{
    Node *newNode = new Node(_value);
    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }
    Node *temp = head;
    while (temp->Next != head)
        temp = temp->Next;
    newNode->Next = head; // newNode->Next = temp->Next;
    temp->Next = newNode;
}

void insertAtHead(Node *&head, int _value)
{
    Node *newNode = new Node(_value);
    newNode->Next = head;
    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }
    Node *temp = head;
    while (temp->Next != head)
        temp = temp->Next;
    temp->Next = newNode;
    head = newNode;
}

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    do 
    {
        cout << temp->value;
        temp = temp->Next;
        if (temp != head)
            cout << " -> ";
        // temp = temp->Next;
    } while (temp != head);
    cout << "\n\n";
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    do
        count++, temp = temp->Next;
    while (temp != head);
    return count;
}

void insertionAtSpecificPosition(Node *&head, int position, int _value)
{
    int i = 0;
    Node *temp = head;
    while (i < position - 2)
        temp = temp->Next, i++;
    Node *newNode = new Node(_value);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}

void deletionAtHead(Node *&head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        Node *delNode = temp;
        while (temp->Next != head)
            temp = temp->Next;
        temp->Next = delNode->Next;
        head = delNode->Next;
        delete delNode;
    }
    else
        cout << "The list is empty" << endl;
}

void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->Next != head)
    {
        while (temp->Next->Next != head)
            temp = temp->Next;
        Node *delNode = temp->Next;
        temp->Next = delNode->Next;
        delete delNode;
    }
    else if (temp == NULL)
        cout << "The list is empty" << endl;
    else
        deletionAtHead(head);
}

void deletionAtSpecificPosition(Node *&head, int position)
{
    Node *temp = head;
    if (position <= countLength(head))
    {
        if (position == 1)
            deletionAtHead(head);
        else if (position == countLength(head))
            deletionAtTail(head);
        else
        {
            int i = 1;
            while (i < position - 1)
                temp = temp->Next, i++;
            Node *delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    else
        cout << "Out of range" << endl;
}

int insertionByValueUnique(Node *&head, int key)
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

void deletionByValueUnique(Node *&head, int _value)
{
    int position = insertionByValueUnique(head, _value);
    if (position != -1)
        deletionAtSpecificPosition(head, position);
    else
        cout << "Value not found" << endl;
}

int main()
{
	Node *head = NULL;
    int choice, value, position, searchValue, delValue, midValue, cycleStatas;
    cout << "Choice 01 : Insertion at head\n" <<
			"Choice 02 : Insertion at tail\n" <<
			"Choice 03 : Insertion at Specific Position\n" <<
			"Choice 04 : Deletion at head\n" <<
			"Choice 05 : Deletion at tail\n" <<
			"Choice 06 : Deletion at Specific Position\n" <<
            "Choice 07 : Deletion by Value (unique list)\n" <<
			"Choice 00 : Exit\n\n" <<
			"Choice ?? : ";
	cin >> choice;
	while (choice != 0)
	{
		switch (choice)
		{
		case 1:
			cout << "Enter the value for Insertion at head: ";
			cin >> value;
			insertAtHead(head, value);
			break;
		case 2:
			cout << "Enter the value for Insertion at tail : ";
			cin >> value;
			insertAtTail(head, value);
			break;
        case 4:
            deletionAtHead(head);
            break;
        case 5:
            deletionAtTail(head);
            break;
		default:
			cout << "Wrong choice" << endl;
			break;
		}
		cout << "Next Choice ? : ";
		cin >> choice;
	}
	cout << "\nLinked List : ";
	display(head);
	cout << "Length of Linked List : " << countLength(head) << endl;
	return 0;
}