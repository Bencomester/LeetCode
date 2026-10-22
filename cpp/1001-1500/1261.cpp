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
class FindElements {
public:
    set<int> set;
    FindElements(TreeNode* root) {
        recover(root);
    }

    void recover(TreeNode* root, int value = 0) {
        if (root) {
            set.insert(value);
            recover(root->left, value * 2 + 1);
            recover(root->right, value * 2 + 2);
        }
    }
    
    bool find(int target) {
        return set.contains(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
