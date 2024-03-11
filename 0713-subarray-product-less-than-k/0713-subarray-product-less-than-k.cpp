class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        double product=1;
        int left=0,right=0;
        int count = 0;
        if(k<=1)return 0;
        while(right<nums.size()){
            product*=nums[right];
            while(product>=k && left<nums.size()){
                product/=nums[left++];
            }
            count+=right-left+1;
            right++;
        }
        return count;
    }
};