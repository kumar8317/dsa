class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++){
            int left=i+1;
            int right = nums.size()-1;
            
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum==0){
                    res.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])left++;
                    while(left<right && nums[right]==nums[right+1])right--;
                    
                }else if(sum>0){
                    right--;
                }else{
                    left++;
                }
            }
            
            while(i+1<nums.size() && nums[i]==nums[i+1])i++;
        }
        
        return res;
    }
};