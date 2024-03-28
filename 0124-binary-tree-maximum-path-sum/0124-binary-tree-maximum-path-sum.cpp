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
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        recursiveHelper(root,maxSum);
        return maxSum;
    }
    
    int recursiveHelper(TreeNode* node,int &maxSum){
        if(node == nullptr) return 0;
        
        int left = recursiveHelper(node->left,maxSum);
        int right = recursiveHelper(node->right,maxSum);
        
        left = max(left,0);
        right = max(right,0);
        
        int localSum = left+right+node->val;
        maxSum = max(maxSum, localSum);
        
        return max(left,right)+node->val;
    }
};