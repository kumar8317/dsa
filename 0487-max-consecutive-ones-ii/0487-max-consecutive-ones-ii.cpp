class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left=0,right=0,maxLen=0,n=nums.size();
        int count_zeroes=0;
        
        while(right<n){
            if(nums[right]==0){
                count_zeroes++;
            }
            
            while(count_zeroes>1){
                if(nums[left]==0)count_zeroes--;
                left++;
            }
            maxLen = max(maxLen,right-left+1);
            right++;
        }
        return maxLen;
    }
};