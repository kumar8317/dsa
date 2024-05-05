class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMax=nums[0];
        int currMin=nums[0];
        int maxSum=nums[0];
        int minSum=nums[0];
        int totalSum=nums[0];
        
        for(int i=1;i<nums.size();i++){
            totalSum+=nums[i];
            
            currMin = min(currMin+nums[i],nums[i]);
            currMax = max(currMax+nums[i],nums[i]);
            
            maxSum = max(maxSum,currMax);
            minSum = min(minSum,currMin);
        }
        if(minSum == totalSum){
            return maxSum;
        }
        return max(maxSum,totalSum-minSum);
    }
};