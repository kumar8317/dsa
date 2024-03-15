class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int missingNumber = 1;
        
        int xor1=1;
        for(auto num:nums){
            xor1^=num;
        }
        
        int xor2=1;
        for(int i=0;i<=n;i++) {
            xor2^=i;
        }
        return xor1^xor2;
    }
};