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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(!root) return ans;
        
        stack<pair<TreeNode*,vector<int>>> st;
        st.push({root,vector<int>{root->val}});

        while(!st.empty()){
            TreeNode* current = st.top().first;
            vector<int> currentSum = st.top().second;
            st.pop();
            
            if(current->left == nullptr && current->right == nullptr){
                int pathSum = 0;
                for(auto val:currentSum){
                    pathSum+=val;
                }
                if(pathSum == targetSum){
                    ans.push_back(currentSum);
                }
            }
            if(current->left  != nullptr){
                vector<int> newPath(currentSum);
                newPath.push_back(current->left->val);
                st.push({current->left,newPath});
            }
            if(current->right != nullptr){
                vector<int> newPath(currentSum);
                newPath.push_back(current->right->val);
                st.push({current->right,newPath});
            }
        }
        return ans;
    }
};