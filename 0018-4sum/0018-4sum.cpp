class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> quadruplets;
    sort(nums.begin(),nums.end());
        cout<<nums.size()<<endl;
        int n = nums.size();
    for(int i=0;i<n-3;i++){
        cout<<"a"<<endl;
      for(int j=i+1;j<n-2;j++){
        int left=j+1,right=n-1;
        while(left<right){
          long long sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[left]+(long long)nums[right];
          if(sum==target){
            quadruplets.push_back({nums[i],nums[j],nums[left],nums[right]});
            left++;
            right--;
            while(left<right && nums[left]==nums[left-1])left++;
            while(left<right && nums[right]==nums[right+1])right--;
          }else if(sum>target){
            right--;
          }else{
            left++;
          }
        }
        while(j+1<n && nums[j]==nums[j+1])j++;
      }
      while(i+1<n && nums[i]==nums[i+1])i++;
    }
        
    return quadruplets;
    }
};