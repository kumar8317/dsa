class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
         vector<bool> b(n+1,false);
       
       for(int i=0;i<n;i++){
           if(nums[i]>0 && nums[i]<=n){
               b[nums[i]]=true;
           }
       }
       for(int i=1;i<n+1;i++){
           if(b[i]==false){
               return i;
           }
       }
       return n+1;
    }
};