class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        long long ans=0;
        int N = nums.size();
        for(int i=0;i<nums.size();i++) {
            int l = lower-nums[i];
            int u = upper-nums[i];
            
            int j = N;
            int k = -1;
            
            int s=i+1;
            int e = N-1;
            
            while(s<=e){
                int mid=s + (e-s)/2;
                if(nums[mid]<l){
                    s=mid+1;
                }else{
                    j = min(j,mid);
                    e=mid-1;
                }
            }
            if(j==N)continue;
            
            s=i+1;
            e=N-1;
            
            while(s<=e){
                int mid = s + (e-s)/2;
                if(nums[mid]>u){
                    e=mid-1;
                }else{
                    k=max(k,mid);
                    s=mid+1;
                }
            }
            if(k==-1)continue;
            int occ = k-j+1;
            ans+=occ;
           
        }
        return ans;
    }
};