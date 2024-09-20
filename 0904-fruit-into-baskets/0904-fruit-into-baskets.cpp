class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int uniqueTree = 0;
        int left=0,right=0,ans=0;
        int n = fruits.size();
        vector<int> mp(n,0);
        while(right<n){
            mp[fruits[right]]++;
            if(mp[fruits[right]]==1)uniqueTree++;
            
            if(uniqueTree>2){
               if(mp[fruits[left]]==1)uniqueTree--;
                mp[fruits[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};