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
    int count = 0;
    int averageOfSubtree(TreeNode* root) {
        avg(root);
        return count;
    }

    vector<int> avg(TreeNode* root) {
        if (!root) return {0, 0};
        vector<int> l = avg(root->left);
        vector<int> r = avg(root->right);
        int sum = l[0] + r[0] + root->val;
        int cnt = l[1] + r[1] + 1;
        if (sum / cnt == root->val) count++;
        return {sum, cnt};
    }
};
