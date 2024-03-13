class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> table;
        int counter = 0;
        long long maxSum=0;
        long long windowSum=0;
        
        for(int i=0;i<k;i++){
            windowSum+=nums[i];
            table[nums[i]]++;
        }
        counter = table.size();
        if(counter == k){
            maxSum = max(maxSum,windowSum);
        }
        
        for(int i=k;i<nums.size();i++){
            windowSum+=nums[i]-nums[i-k];
            table[nums[i-k]]--;
            if(table[nums[i-k]]==0){
                table.erase(nums[i-k]);
                counter--;
            }
            table[nums[i]]++;
            counter = table.size();
            if(counter==k){
               maxSum = max(maxSum,windowSum); 
            }
        }
        return maxSum;
        
    }
};