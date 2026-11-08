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

void printTree(treeNode *root, int lavel)
{}

int main()
{
    int n;
    cin >> n;

    treeNode *allNode[n];

    for (int i = 0; i < n; i++)
    {
        allNode[i]->data = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int value, leftChild, rightChild;
        cin >> value >> leftChild >> rightChild;
        allNode[i]->data = value;

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
/*  Root : 0
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