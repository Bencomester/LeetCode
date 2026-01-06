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
    unordered_map<int, int> map;
    int maxDepth = 1;

    int maxLevelSum(TreeNode* root, int level = 1) {
        if (root != nullptr) {
            map[level] += root->val;
            maxDepth = max(maxDepth, level);
            maxLevelSum(root->left, level + 1);
            maxLevelSum(root->right, level + 1);
        }

        if (level > 1) return 0;
        
        int m = 1;
        for (int i = 1; i <= maxDepth; i++) {
            if (map[m] < map[i]) m = i;
        }
        return m;
    }
};
