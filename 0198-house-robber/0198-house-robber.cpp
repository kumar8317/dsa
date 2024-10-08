class Solution {
    private:
     int robber(vector<int>& nums){
         int n = nums.size();
         int prev = nums[0];
         int prev2 = 0;
        
         for(int i=1;i<n;i++){
             int take = nums[i];
             if(i>1)take+=prev2;
             int notTake = prev;
             
             int curr = max(take,notTake);
             prev2 = prev;
             prev = curr;
         }
         return prev;
     }

public:
    int rob(vector<int>& nums) {
        
        
        
        return robber(nums);
    }
};