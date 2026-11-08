#include <bits/stdc++.h>
using namespace std;

/* Summary */

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

struct Test
{
	int position[1000];
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
	cout << "\n\n";
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
	Node *newNode = new Node(_value);
	newNode->Next = head;
	head = newNode;
}

int countLength(Node *&head)
{
	int count = 0;
	Node *temp = head;
	while (temp != NULL)
		count++,
		temp = temp->Next;
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

void searchByValueDuplicate(Node *&head, int key)
{
	Node *temp = head;
	int count = 1, flag = 0, size = countLength(head), position[size + 1], k = 1;
	while (temp != NULL)
	{
		if (temp->value == key)
		{
			position[k] = count, k++, flag = 1;
		}
		temp = temp->Next, count++;
	}
	if (flag == 0)
		cout << "Value not found" << endl;
	else
	{
		position[0] = k;
		cout << "Value found at position : ";
		for (int i = 1; i < position[0]; i++)
		{
			cout << position[i];
			if (i < position[0] - 1)
				cout << ", ";
			else
				cout << endl;
		}
	}
}

Test searchByValueDuplicateReturn(Node *&head, int key)
{
	Node *temp = head;
	int count = 1, k = 1;
	Test T;
	while (temp != NULL)
	{
		if (temp->value == key)
		{
			T.position[k] = count, k++;
		}
		temp = temp->Next, count++;
	}
	T.position[0] = k;
	return T;
}

void insertionByValueUnique(Node *&head, int searchValue, int _value)
{
	int position = insertionByValueUnique(head, searchValue);
	insertionAtSpecificPosition(head, position + 1, _value);
}

void deletionAtHead(Node *&head)
{
	Node *temp = head;
	if (temp != NULL)
	{
		head = temp->Next;
		delete temp;
	}
	else
		cout << "The list is empty" << endl;
}

void deletionAtTail(Node *&head)
{
	Node *temp = head;
	if (temp != NULL && temp->Next != NULL)
	{
		while (temp->Next->Next != NULL)
			temp = temp->Next;
		Node *delNode = temp->Next;
		temp->Next = NULL;
		delete delNode;
	}
	else
		if (temp == NULL)
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
	int choice, value, position, searchValue, delValue;
	cout << "Choice 01 : Insertion at head\n" <<
			"Choice 02 : Insertion at tail\n" <<
			"Choice 03 : Insertion at Specific Position\n" <<
			"Choice 04 : Search a value (Unique list)\n" <<
			"Choice 05 : Search a value (Duplicate enabled list)\n" <<
			"Choice 06 : Insertion after a specific value (Unique list)\n" <<
			"Choice 07 : Insertion after a specific value (Duplicate enabled list) not found\n" <<
			"Choice 08 : Deletion at head\n" <<
			"Choice 09 : Deletion at tail\n" <<
			"Choice 10 : Deletion at Specific Position (Duplicate enabled list)\n" <<
			"Choice 11 : Deletion at Specific Position (Unique list)\n" <<
			"Choice 12 : Deletion at Specific Position (duplicate enabled list)\n" <<
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
		case 3:
			cout << "Enter the Desired position : ";
			cin >> position;
			cout << "Enter the value for Insertion at Specific Position : ";
			cin >> value;
			insertionAtSpecificPosition(head, position, value);
			break;
		case 4:
			cout << "Enter the value to Search (Unique list) : ";
			cin >> value;
			position = insertionByValueUnique(head, value);
			if (position == -1)
				cout << "Value not found" << endl;
			else
				cout << "Value found at position " << position << endl;
			break;
		case 5:
			cout << "Enter the value to Search (Duplicate enabled list) : ";
			cin >> value;
			Test T;
			T = searchByValueDuplicateReturn(head, value);
			if (T.position[0] == 1)
				cout << "Value not found" << endl;
			else
			{
				cout << "Value found at position : ";
				for (int i = 1; i < T.position[0]; i++)
				{
					cout << T.position[i];
					if (i < T.position[0] - 1)
						cout << ", ";
					else
						cout << endl;
				}
			}
			break;
		case 6:
			cout << "Enter the value to search : ";
			cin >> searchValue;
			cout << "Enter the value to Insertion after a specific value (Unique list) : ";
			cin >> value;
			insertionByValueUnique(head, searchValue, value);
			break;
		case 7:
			cout << "Not completed" << endl;
			break;
		case 8:
			deletionAtHead(head);
			break;
		case 9:
			deletionAtTail(head);
			break;
		case 10:
			if (head == NULL)
			{
				cout << "The head is NULL" << endl;
				break;
			}
			cout << "Enter the Desired position : ";
			cin >> position;
			deletionAtSpecificPosition(head, position);
			cout << endl;
			display(head);
			break;
		case 11:
			cout << "Enter the value to delete (Unique list) : ";
			cin >> delValue;
			deletionByValueUnique(head, delValue);
			break;
        case 12:
            cout << "Not completed" << endl;
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