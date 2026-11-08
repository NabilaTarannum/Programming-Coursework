#include <iostream>
#include <queue>
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

void inOrder(treeNode *root, string &chk) // Left Root Right
{
    if (root == NULL)
        return;
    inOrder(root->leftChild, chk);
    chk += to_string(root->data);
    inOrder(root->rightChild, chk);
}

void preOrder(treeNode *root, string &chk) // Root Left Right
{
    if (root == NULL)
        return;
    chk += to_string(root->data);
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}

void postOrder(treeNode *root, string &chk) // Left Right Root
{
    if (root == NULL)
        return;
    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += to_string(root->data);
}

int levelOrder(treeNode *root, string &chk, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    int level = 0;
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);
    int max = -9999;
    while (!q.empty())
    {
        treeNode *chkNode = q.front();
        q.pop();
        if (chkNode != NULL)
        {
            if (level == k)
            {
                if (max < chkNode->data)
                {
                    max = chkNode->data;
                }
            }
            cout << chkNode->data << " ";
            chk += to_string(chkNode->data);
            if (chkNode->leftChild != NULL)
            {
                q.push(chkNode->leftChild);
            }
            if (chkNode->rightChild != NULL)
            {
                q.push(chkNode->rightChild);
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
                level++;
            }
        }
    }
    return max;
}

void printLeaves(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << " ";
        return;
    }
    printLeaves(root->leftChild);
    printLeaves(root->rightChild);
}

void printNonLevesLeft(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        printNonLevesLeft(root->leftChild);
    }
    else if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        printNonLevesLeft(root->rightChild);
    }
}

void printNonLeavesRight(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        printNonLevesLeft(root->rightChild);
    }
    else if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        printNonLevesLeft(root->leftChild);
    }
}

void boundaryOrder(treeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    
    // LB Non-Leaves
    printNonLevesLeft(root->leftChild);
    // LB Leaves
        printLeaves(root->leftChild);
    // RB Leaves
    printLeaves(root->rightChild);
    // RB Non-Leaves
    printNonLeavesRight(root->rightChild);
}

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

int searchInorder(int inOrder[], int current, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == current)
        {
            return i;
        }
    }
    return -1;
}

treeNode *buildTreePreIn(int preOrder[], int inOrder[], int start, int end)
{
    static int id = 0;
    int current = preOrder[id];
    id++;
    treeNode *newNode = new treeNode(current);
    if (start == end)
    {
        return newNode;
    }
    int pos = searchInorder(inOrder, current, start, end);
    newNode->leftChild = buildTreePreIn(preOrder, inOrder, start, pos - 1);
    newNode->rightChild = buildTreePreIn(preOrder, inOrder, pos + 1, end);
    return newNode;
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
    // printTree(allNode[0], 0);

    string inorder_traversal = "";
    string preorder_traversal = "";
    string postorder_traversal = "";
    string levelorder_traversal = "";

    // inOrder(allNode[0], inorder_traversal);
    // preOrder(allNode[0], preorder_traversal);
    // postOrder(allNode[0], postorder_traversal);
    // int maxValueAtK = levelOrder(allNode[0], levelorder_traversal, 2);
    boundaryOrder(allNode[0]);
    // cout << "Inorder traversal : " << inorder_traversal << endl;
    // cout << "Preorder traversal : " << preorder_traversal << endl;
    // cout << "Postorder traversal : " << postorder_traversal << endl;
    // cout << "Levelorder traversal : " << levelorder_traversal << endl;

    // cout << endl << maxValueAtK << endl;
    return 0;
}

/* Input :
9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6

9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1 */

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
