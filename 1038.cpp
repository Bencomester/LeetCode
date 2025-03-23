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
    TreeNode* bstToGst(TreeNode* root) {
        return helper(root, root);
    }

    int sum(TreeNode* root, int a) {
        int n = 0;
        if (root->val >= a) n += root->val;
        if (root->left != nullptr) n += sum(root->left, a);;
        if (root->right != nullptr) n +=  sum(root->right, a);
        return n;
    }

    TreeNode* helper(TreeNode* root, TreeNode* node) {
        if (node == nullptr) return nullptr;
        return new TreeNode(sum(root, node->val), helper(root, node->left), helper(root, node->right));
    }
};
