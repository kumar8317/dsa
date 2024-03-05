class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,curr_avg=0,max_avg=INT_MIN;;
        
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        curr_avg = (sum)/k;
        max_avg=max(curr_avg,max_avg);
        for(int i=k;i<nums.size();i++){
            sum += nums[i]-nums[i-k];
            curr_avg = (sum)/k;
            max_avg = max(max_avg,curr_avg);
            
        }
        return max_avg;
    }
};