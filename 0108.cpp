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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int len = nums.size();
        if (len == 0) return nullptr;
        
        int mid = len / 2;
        TreeNode* node = new TreeNode(nums[mid]);

        vector<int> nl(nums.begin(), nums.begin() + mid);
        node->left = sortedArrayToBST(nl);

        vector<int> nr(nums.begin() + mid + 1, nums.end());
        node->right = sortedArrayToBST(nr);

        return node;
    }
};
