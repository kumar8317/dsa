class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int ans=0;
        int n = nums.size();
        int left=0,right=n-1;
        int mod = 1000000007;
        sort(nums.begin(),nums.end());
        
        vector<int> power (n);
        
        power[0]=1;
        
        for(int i=1;i<n;i++){
            power[i] = (power[i-1]*2)%mod;
        }
        while(left<=right){
                if(nums[left]+nums[right]<=target){
                    ans+=power[right-left];
                    ans%=mod;
                    left++;
                }else{
                    right--;
                }
        }
        
        return ans;
    }
};