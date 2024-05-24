class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        int s=0,e=n-1;
        
        while(s<=e){
            int mid = s+(e-s)/2;
           // cout<<"mid"<<mid<<endl;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[0]<=nums[mid]){
               // cout<<"0"<<nums[mid]<<endl;
                if(target>=nums[0] && target<=nums[mid]) {
                    //cout<<'s'<<endl;
                    e = mid-1;
                }else{
                    //cout<<"aa"<<endl;
                    s = mid+1;
                }
            }else{
                if(target>=nums[mid] && target<=nums[e]){
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};