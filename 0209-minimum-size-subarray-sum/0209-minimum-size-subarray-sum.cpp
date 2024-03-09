class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int left=0,right=0;
        int sum=0,min_length=INT_MAX;
        int n = nums.size();
        while(right<n){
            sum+=nums[right];
            right++;
            
            while(sum>=target){
                min_length=min(min_length,right-left);
                sum-=nums[left];
                left++;
            }
            
        }
        if(min_length == INT_MAX){
            return 0;
        }
        
        return min_length;
    }
};