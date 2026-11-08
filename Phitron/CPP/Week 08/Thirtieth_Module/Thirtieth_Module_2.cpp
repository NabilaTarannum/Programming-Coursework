#include <iostream>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;
    treeNode(int value)
    {
        this->data = value;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};

void spacePrint(int lavel)
{
    for (int i = 0; i < lavel; i++)
    {
        cout << "    ";
    }
}

void printTree(treeNode *root, int lavel)
{
    if (root == NULL)
    {
        return;
    }

    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << endl;
        return;
    }
    else
    {
        cout << endl;
        spacePrint(lavel);
        cout << "Root : " << root->data << endl;
    }

    if (root->leftChild != NULL)
    {
        spacePrint(lavel);
        cout << "Left : ";
        printTree(root->leftChild, lavel + 1);
    }

    if (root->rightChild != NULL)
    {
        spacePrint(lavel);
        cout << "Right : ";
        printTree(root->rightChild, lavel + 1);
    }
}

int main()
{
    int n;
    cin >> n;

    treeNode *allNode[n];

    for (int i = 0; i < n; i++)
    {
        allNode[i] = new treeNode(-1);
    }

    for (int i = 0; i < n; i++)
    {
        int value, leftChild, rightChild;
        cin >> value >> leftChild >> rightChild;
        allNode[i]->data = value;

        if (leftChild > n - 1 || rightChild > n - 1)
        {
            cout << "Invalid Index" << endl;
            break;
        }

        if (leftChild != -1)
        {
            allNode[i]->leftChild = allNode[leftChild];
        }
        if (rightChild != -1)
        {
            allNode[i]->rightChild = allNode[rightChild];
        }
    }
    printTree(allNode[0], 0);
    return 0;
}
/* Input :
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
 */

/* Output :
Root : 0
Left :
    Root : 1
    Left : 3
    Right : 4
Right :
    Root : 2
    Left :
        Root : 5
        Left : 7
        Right : 8
    Right : 6  */
