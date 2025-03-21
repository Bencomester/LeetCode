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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return nullptr;
        int m = 0;
        for (int i = 0; i < len; i++) if (nums[m] < nums[i]) m = i;
        vector<int> v1(nums.begin(), nums.begin() + m);
        vector<int> v2(nums.begin() + m + 1, nums.end());
        return new TreeNode(nums[m], constructMaximumBinaryTree(v1), constructMaximumBinaryTree(v2));
    }
};
