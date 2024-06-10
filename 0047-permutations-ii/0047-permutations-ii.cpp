class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>>& ans,int index){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        vector<bool> use(21,0);
        for(int i=index;i<nums.size();i++){
            if(use[nums[i]+10]==0){
                swap(nums[index],nums[i]);
                helper(nums,ans,index+1);
                swap(nums[index],nums[i]);
                use[nums[i]+10]=1;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(nums,ans,0);
        return ans;
    }
};