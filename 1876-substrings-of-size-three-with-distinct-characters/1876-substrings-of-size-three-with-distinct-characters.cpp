class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        int ws=0;
        unordered_map<char,int> mp;
        for(int we=0;we<s.length();we++){
            mp[s[we]]++;
            if(we-ws+1 == 3){
                if(mp.size()==3)count++;
                mp[s[ws]]--;
                if(mp[s[ws]]==0){
                    mp.erase(s[ws]);
                }
                ws++;
            }
        }
        
        return count;
    }
};