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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.empty()) return nullptr;
        TreeNode* node = new TreeNode(preorder[0]);
        vector<int> l;
        vector<int> r;
        int len = preorder.size();
        for (int i = 1; i < len; i++) {
            if (preorder[i] < preorder[0]) l.push_back(preorder[i]);
            else r.push_back(preorder[i]);
        }
        node->left = bstFromPreorder(l);
        node->right = bstFromPreorder(r);
        return node;
    }
};
