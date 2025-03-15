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
    int deepestLeavesSum(TreeNode* root) {
        int level = maxLevel(root);
        return sumNodes(root, level);
    }

    int maxLevel(TreeNode* root, int level = 0) {
        int max = level;
        if (root->left != nullptr) max = maxLevel(root->left, level + 1);
        if (root->right != nullptr) {
            int r = maxLevel(root->right, level + 1);
            if (max < r) max = r;
        }
        return max;
    }

    int sumNodes(TreeNode* root, int level, int depth = 0) {
        if (depth == level) return root->val;
        int sum = 0;
        if (root->left != nullptr) sum += sumNodes(root->left, level, depth + 1);
        if (root->right != nullptr) sum += sumNodes(root->right, level, depth + 1);
        return sum;
    }
};
