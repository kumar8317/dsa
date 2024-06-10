class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,vector<bool>& vis){
        
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i]==0){
                vis[i]=1;
                temp.push_back(nums[i]);
                helper(nums,ans,temp,vis);
                vis[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> vis(nums.size(),0);
        helper(nums,ans,temp,vis);
        return ans;
    }
};