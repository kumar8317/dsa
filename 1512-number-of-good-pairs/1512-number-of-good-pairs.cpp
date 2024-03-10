class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int pairCount = 0 ;
        map<int,int> mp;
        
        for(auto num:nums){
            mp[num]++;
            pairCount+=mp[num]-1;
        }
        return pairCount;
    }
};