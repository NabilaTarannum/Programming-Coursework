#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int value;
        Node *Next;
};

void display(Node *node)
{
    while (node != NULL)
    {
        cout << node -> value;
        if (node -> Next != NULL)
            cout << " -> ";
        node = node -> Next;
    }
    cout << endl << endl;
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head -> value = 1;
    second -> value = 5;
    third -> value = 8;
    fourth -> value = 9;

    head -> Next = second;
    second -> Next = third;
    third -> Next = fourth;
    fourth -> Next = NULL;

    display(head);
    return 0;
}