/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if (root == nullptr) return {};
        vector<int> nodes;
        for (Node* n : root->children) {
            vector<int> temp = postorder(n);
            nodes.insert(nodes.end(), temp.begin(), temp.end());
        }
        nodes.push_back(root->val);
        return nodes;
    }
};
