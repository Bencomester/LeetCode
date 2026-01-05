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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if (root == nullptr) return v;
        vector<int> vl = inorderTraversal(root->left);
        vector<int> vr = inorderTraversal(root->right);
        v.insert(v.end(), vl.begin(), vl.end());
        v.push_back(root->val);
        v.insert(v.end(), vr.begin(), vr.end());
        return v;
    }
};
