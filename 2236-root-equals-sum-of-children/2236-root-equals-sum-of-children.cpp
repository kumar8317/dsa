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
    bool checkTree(TreeNode* root) {
        if(!root)return true;
        
        if(!root->left && !root->right)return false;
        
        if(!root->left && root->right){
            return root->val == root->right->val;
        }
        if(!root->right && root->left){
            return root->val == root->left->val;
        }
        
        return root->val == (root->left->val + root->right->val);
    }
};