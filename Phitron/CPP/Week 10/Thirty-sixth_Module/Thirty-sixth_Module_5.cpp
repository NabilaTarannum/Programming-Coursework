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
    chk += (to_string(root->data) + " ");
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

treeNode *insertionBST(treeNode *root, int value)
{
    treeNode *newNode = new treeNode(value);
    if (root == NULL)
    {
        root = newNode;
        return root;
    }
    if (value < root->data) // value < root->data
    {
        root->leftChild = insertionBST(root->leftChild, value);
    }
    else if (value > root->data) // value > root->data
    {
        root->rightChild = insertionBST(root->rightChild, value);
    }
    return root;
}

treeNode *searchBST(treeNode *root, int value)
{
    if (root == NULL)
        return NULL;
    if (root->data == value)
    {
        cout << root->data;
        return root;
    }
    else if (value < root->data)
    {
        cout << root->data << " -> ";
        searchBST(root->leftChild, value);
    }
    else
    {
        cout << root->data << " -> ";
        searchBST(root->rightChild, value);
    }
    return root;
}

treeNode *inOrderSucc(treeNode *root)
{
    treeNode *current = root;
    while (current->leftChild != NULL)
    {
        current = current->leftChild;
    }
    return current;
}

treeNode *deletionBST(treeNode *root, int value)
{
    if (value < root->data)
    {
        root->leftChild = deletionBST(root->leftChild, value);
    }
    else if (value > root->data)
    {
        root->rightChild = deletionBST(root->rightChild, value);
    }
    else // Implementation of 3 case
    {
        if (root->leftChild == NULL)
        {
            treeNode *temp = root->rightChild;
            free(root);
            return temp;
        }
        else if (root->rightChild == NULL)
        {
            treeNode *temp = root->leftChild;
            free(root);
            return temp;
        }
        else
        {
            treeNode *temp = inOrderSucc(root->rightChild);
            root->data = temp->data;
            root->rightChild = deletionBST(root->rightChild, temp->data);
        }
    }
    return root;
}

int main()
{
    int n;
    cin >> n;
    treeNode *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        root = insertionBST(root, value);
    }
    string str = "";
    inOrder(root, str);
    cout << str << " ";

    int key;
    cin >> key;
    /* if (searchBST(root, key) == NULL)
        cout  << endl << "Value dose not exits in the BST";
    else
        cout << endl << "Value exits in the BST"; */
    root = deletionBST(root, key);
    string str_ = "";
    inOrder(root, str_);
    cout << str_;
    cout << endl
         << endl;
    return 0;
}

/* Input :
9
11 5 9 43 34 1 2 7 21 */
