class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=nums[0];
        int count=1;
        
        for(int i=1;i<nums.size();i++) {
            if(major==nums[i]){
                count++;
            }else if(count==0){
                count++;
                major=nums[i];
            }else{
                count--;
            }
        }
        return major;
    }
};