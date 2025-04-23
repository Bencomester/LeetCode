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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v(2000);
        helper(root, 0, v);
        int i = 0;
        while (i < 2000 && !v[i].empty()) i++;
        v.erase(v.begin() + i, v.end());
        return v;
    }

    void helper(TreeNode* root, int depth, vector<vector<int>>& vec) {
        if (!root) return;
        vec[depth].push_back(root->val);
        helper(root->left, depth + 1, vec);
        helper(root->right, depth + 1, vec);
    }
};
