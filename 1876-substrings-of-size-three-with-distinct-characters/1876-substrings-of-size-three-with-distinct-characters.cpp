class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        
        int begin=0,end=0;
        int count=0;
        
        while(end<n){
            mp[s[end]]++;
            if((end-begin+1)<3)end++;
            else{
                if(mp.size()==3)count++;
                mp[s[begin]]--;
                if(mp[s[begin]]==0)mp.erase(s[begin]);
                begin++;
                end++;
            }
        }
        return count;
    }
};