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
    int sumEvenGrandparent(TreeNode* root) {
        if (!root) return 0;
        return sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right) + (root->val % 2 == 0 ? lr(root->left) + lr(root->right) : 0);
    }

    int lr(TreeNode* node) {
        return node ? nvl(node->left) + nvl(node->right) : 0;
    }

    int nvl(TreeNode* node) {
        return node ? node->val : 0;
    }
};
