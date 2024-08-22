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
    class Box {
        public:
            bool BST;
            int sum;
            int min;
            int max;
            
            Box(){
                BST=1;
                sum=0;
                min = INT_MAX;
                max = INT_MIN;
            }
    };
    Box* find(TreeNode* root,int& sum){
        
        if(!root)return new Box();
        
        Box* leftHead = find(root->left,sum);
        Box* rightHead = find(root->right,sum);
        
        if(leftHead->BST && rightHead->BST && leftHead->max < root->val && rightHead->min > root->val){
            Box* head = new Box();
            head->sum = root->val+leftHead->sum+rightHead->sum;
            head->min = min(root->val,leftHead->min);
            head->max = max(root->val,rightHead->max);
            sum = max(sum,head->sum);
            return head;
        }else{
            leftHead->BST = 0;
            return leftHead;
        }
    }
    int maxSumBST(TreeNode* root) {
        int sum = 0;
    	
    	find(root,sum);
    	
    	return sum;
    }
};