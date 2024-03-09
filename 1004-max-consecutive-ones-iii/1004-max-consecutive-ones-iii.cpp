class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0,right = 0, global_max=INT_MIN;
        
        int n = nums.size();
        int count_zeroes = 0;
        while(right<n){
            if(nums[right]==0){
                count_zeroes++;
            }
            while(count_zeroes == k+1){
                global_max=max(global_max,right-left);
                if(nums[left]==0){
                    count_zeroes--;
                }
                left++;
            }
            if(count_zeroes<=k){
                global_max=max(global_max,right-left+1);
            }
            right++;
        }
        
        return global_max;
    }
};