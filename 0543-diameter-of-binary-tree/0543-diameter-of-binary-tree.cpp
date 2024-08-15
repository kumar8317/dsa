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
    int maxDist = 0;

    int dfs(TreeNode* root,int height){
        if(root==nullptr)return height;

        int left = dfs(root->left,height);
        int right = dfs(root->right,height);

        if(left+right>maxDist){
            maxDist = left+right;
        }
        height++;
        height+=max(left,right);

        return height;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root,0);
        return maxDist;
    }
};