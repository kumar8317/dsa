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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)return false;
        stack<pair<TreeNode*,int>> st;
        st.push({root,root->val});
        
        while(!st.empty()){
            TreeNode* current = st.top().first;
            int currentSum = st.top().second;
            st.pop();
            
            if(currentSum == targetSum && current->left == NULL && current->right == NULL){
                return true;
            }
            //cout<<current->val<<"jo"<<endl;
            
            if(current->left != NULL ){
                st.push({current->left,currentSum+current->left->val});
            }
            if(current->right != NULL ){
                st.push({current->right,currentSum+current->right->val});
            }
        }
        return false;
    }
};