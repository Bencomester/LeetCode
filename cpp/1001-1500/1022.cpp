/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumRootToLeaf(const TreeNode* root, const int sum = 0) {
        int l = 0, r = 0;
        if (root->left) l = sumRootToLeaf(root->left, sum * 2 + root->val);
        if (root->right) r = sumRootToLeaf(root->right, sum * 2 + root->val);
        if (!root->left && !root->right) return sum * 2 + root->val;
        return l + r;
    }
};
