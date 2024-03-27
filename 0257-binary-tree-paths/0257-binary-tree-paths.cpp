class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        string ans;
        printNodes(root, ans, result);
        return result;
    }
    void printNodes(TreeNode* root, string ans, vector<string>& result)
    {
        if(root == NULL)
        {
            return;
        }
        ans += to_string(root->val) + "->";
        if(root->left == NULL && root->right ==NULL)
        {
            ans.erase(ans.length()-2, 2);
            result.push_back(ans);
        }
        printNodes(root->left, ans, result);
        printNodes(root->right, ans, result);
    }
};