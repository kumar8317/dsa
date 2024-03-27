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
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        if(!root) return sum;
        
        stack<pair<TreeNode*,int>> st;
        st.push({root,root->val});
        
        while(!st.empty()){
            TreeNode* current = st.top().first;
            int number = st.top().second;
            st.pop();
            
            if(current->left == nullptr && current->right == nullptr){
                sum+=number;
            }
            
            if(current->left){
                st.push({current->left,number*10+current->left->val});
            }
            if(current->right){
                st.push({current->right,number*10+current->right->val});
            }
        }
        return sum;
    }
};