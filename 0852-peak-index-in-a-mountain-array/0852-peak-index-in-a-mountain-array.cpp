class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int ans;
        int s=0,e=nums.size()-1;
        
        while(s<=e){
            int mid=e+(s-e)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) {
                return mid;
            }else if(nums[mid]>nums[mid-1]){
                
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return -1;
    }
};