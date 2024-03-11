class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        int n = nums.size();
        while(left<n-1 && nums[left]<=nums[left+1]){
            left++;
        }
        if(left==n-1)return 0;
        
        while(right>0 && nums[right]>=nums[right-1]){
            right--;
        }
        int sub_min=INT_MAX,sub_max=INT_MIN;
        for(int i=left;i<=right;i++){
            sub_min=min(sub_min,nums[i]);
            sub_max=max(sub_max,nums[i]);
        }
        cout<<sub_min<<endl;
        cout<<sub_max<<endl;
        while(left>0 && nums[left-1]>sub_min){
            left--;
        }
        cout<<left<<endl;
        cout<<right<<endl;
        while(right+1<n&& nums[right+1]<sub_max){
            right++;
        }
        return right-left+1;
    }
};