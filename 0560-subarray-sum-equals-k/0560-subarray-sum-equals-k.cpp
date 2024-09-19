class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prefixSum[n];
        prefixSum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }

        int ans=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            
            if(prefixSum[i]==k)ans++;
            
            if(m.find(prefixSum[i]-k)!=m.end()){
                ans+=m[prefixSum[i]-k];
            }/*  */
            m[prefixSum[i]]++;
        }
        return ans;
    }
};