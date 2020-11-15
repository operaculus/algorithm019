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
    vector<int> visited;
    vector<int> preorder(Node* root) {
        if (root != NULL) {

            visited.push_back(root->val);

            vector<Node *> children = root->children;            
            for (vector<Node *> :: iterator it = children.begin(); it != children.end(); it++) {
                preorder(*it);
            }
        }
        return visited;
    }
};
