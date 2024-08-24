class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> sol(n,1);
        int left=1,right=1;

        for(int i=0;i<n;i++){
            sol[i]*=left;
            left*=nums[i];
            int j=n-i-1;
            sol[j]*=right;
            right*=nums[j];
        }
        return sol;
        
    }
};