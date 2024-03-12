class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAverage=INT_MIN;
        int left=0,right=0;
        
        int windowSum=0;
        
        
        for(int i=0;i<k;i++){
            windowSum+=nums[i];
        }
        double currAverage = (double)windowSum/(double)k;
        maxAverage=max(maxAverage,currAverage);
        
        for(int i=k;i<nums.size();i++){
            windowSum += nums[i]-nums[i-k];
            currAverage = (double)windowSum/(double)k;
            maxAverage=max(maxAverage,currAverage);
        }
        
        return maxAverage;
    }
};