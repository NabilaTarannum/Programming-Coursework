#include <iostream>
using namespace std;

/* Problem link - https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/ */

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        if (cloned == NULL)
            return NULL;
        if (cloned->val == target->val)
            return cloned;
        TreeNode *a = getTargetCopy(original, cloned->left, target);
        TreeNode *b = getTargetCopy(original, cloned->right, target);
        if (a != NULL)
            return a;
        else if (b != NULL)
            return b;
        else
            return NULL;
    }
};

int main()
{
    return 0;
}
