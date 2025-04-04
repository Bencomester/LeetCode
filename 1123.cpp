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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int l = findDepth(root->left);
        int r = findDepth(root->right);
        if (l == r) return root;
        if (l > r) return lcaDeepestLeaves(root->left);
        return lcaDeepestLeaves(root->right);
    }

    int findDepth(TreeNode* root, int depth = 0) {
        if (!root) return depth;
        return max(findDepth(root->left, depth + 1), findDepth(root->right, depth + 1));
    }
};
