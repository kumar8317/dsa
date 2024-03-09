class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left=0,right=0,count_zeroes=0;
        int n = nums.size();
        int global_max=INT_MIN;
        
        while(right<n){
            if(nums[right]==0){
                count_zeroes++;
            }
            
            while(count_zeroes==1){
                global_max=max(global_max,right-left);
                if(nums[left]==0){
                    count_zeroes-=1;
                }
                left++;
            }
            if(count_zeroes<1){
                global_max=max(global_max,right-left+1);
            }
            
            right++;
        }
        return global_max;
    }
};