class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int prefixSum[n];
        prefixSum[0] = nums[0];
        
        for(int i=1;i<n;i++){
            prefixSum[i] = prefixSum[i-1]+nums[i];
        }
        int ans=0;
        unordered_map<int,int> occ;
        
        for(int i=0;i<n;i++){
            if(prefixSum[i]==k)ans++;
            if(occ.find(prefixSum[i]-k)!=occ.end()){
                ans+=occ[prefixSum[i]-k];
            }
            occ[prefixSum[i]]++;
        }
        return ans;
    }
};