class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int s = 0,e=nums.size()-1;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>=nums[0]){
                if(nums[s]<=target && nums[mid]>=target) {
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }else{
                if(nums[mid]<=target && nums[e]>=target) {
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }
        }
        return ans;
    }
};