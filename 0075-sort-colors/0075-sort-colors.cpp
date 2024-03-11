class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0,right=nums.size()-1,mid=0;
        
        while(mid<=right){
           int ele = nums[mid];
            if(ele==0){
                swap(nums[left++],nums[mid++]);
            }else if(ele==1)mid++;
            else if(ele==2){
                swap(nums[mid],nums[right--]);
            }
        }
    }
};