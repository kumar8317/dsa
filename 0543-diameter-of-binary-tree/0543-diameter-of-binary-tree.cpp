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
    int diameterOfBinaryTree(TreeNode* root) {
        int treeDiameter = 0;
        calculateHeight(root,treeDiameter);
        return treeDiameter;
    }
    
    int calculateHeight(TreeNode* node,int &treeDiameter){
       if(node == nullptr) return 0;
        
        int left =  calculateHeight(node->left,treeDiameter);
        int right = calculateHeight(node->right,treeDiameter);
        
        treeDiameter = max(treeDiameter,left+right);
        
        
        return max(left,right)+1;
    }
};