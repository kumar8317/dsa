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
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        
        stack<pair<TreeNode*,vector<int>>> st;
        st.push({root,vector<int>{root->val}});
        int count = 0;
        while(!st.empty()){
            TreeNode* current = st.top().first;
            vector<int> currentPath = st.top().second;
            st.pop();
            double pathSum = 0;
            for(vector<int>::reverse_iterator itr=currentPath.rbegin();itr!=currentPath.rend();++itr){
                pathSum+=*itr;
                if(pathSum == targetSum){
                    count++;
                }
            }
            
            if(current->left != nullptr){
                vector<int> newPath(currentPath);
                newPath.push_back(current->left->val);
                st.push({current->left,newPath});
            }
            if(current->right != nullptr){
                vector<int> newPath(currentPath);
                newPath.push_back(current->right->val);
                st.push({current->right,newPath});
            }
        }
        
        return count;
    }
};