class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(auto num:nums){
            if(num<k){
                count++;
            }
        }
        return count;
    }
};