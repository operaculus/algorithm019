/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) {
            return root;
        }
        if (root == p || root == q) {
            return root;
        }

        TreeNode left_sub_LCA = lowestCommonAncestor(root->left, p, q);
        TreeNode right_sub_LCA = lowestCommonAncestor(root->right, p, q);

        if(left_sub_LCA != NULL && right_sub_LCA != NULL) {
            return root;
        } else if (left_sub_LCA != NULL){            
            return left_sub_LCA;
        } else if (right_sub_LCA != NULL) {
            return right_sub_LCA;
        }

        return NULL;
    }
};
