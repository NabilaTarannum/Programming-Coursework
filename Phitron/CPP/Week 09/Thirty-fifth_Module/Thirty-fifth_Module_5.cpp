#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/* Problem link - https://leetcode.com/problems/binary-tree-level-order-traversal/ */

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int depth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int x = depth(root->left);
        int y = depth(root->right);
        return max(x, y) + 1;
    }
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        int n = depth(root);
        vector<vector<int>> ans(n);
        if (root == NULL)
            return ans;
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});
        while (!q.empty())
        {
            pair<TreeNode *, int> parent = q.front();
            q.pop();
            ans[parent.second].push_back(parent.first->val);
            if (parent.first->left)
                q.push({parent.first->left, parent.second + 1});
            if (parent.first->right)
                q.push({parent.first->right, parent.second + 1});
        }
        return ans;
    }
};

int main()
{
    return 0;
}
