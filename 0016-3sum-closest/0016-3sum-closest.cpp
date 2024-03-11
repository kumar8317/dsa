class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int smallestDiff = INT_MAX;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1,right=nums.size()-1;
            
            while(left<right){
                int targetDiff = target-nums[i]-nums[left]-nums[right];
                if(targetDiff==0){
                    return target;
                }
                if(abs(targetDiff)<abs(smallestDiff) || (abs(targetDiff)==abs(smallestDiff) && targetDiff>smallestDiff)){
                    smallestDiff = targetDiff;
                }
                if(targetDiff>0){
                    left++;
                }else{
                    right--;
                }
            }
        }
        
        
        return target-smallestDiff;
    }
};