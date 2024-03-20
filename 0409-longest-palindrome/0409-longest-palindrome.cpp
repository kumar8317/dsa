class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(auto c:s){
            mp[c]++;
        }
        int maxLength = 0;
        int oddFound = false;
        for(auto& it:mp){
            int count = it.second;
            if(count%2==0){
                maxLength+=count;
            }else{
                maxLength +=count-1;
                oddFound=true;
            }
        }
        if(oddFound){
            maxLength++;
        }
        
        return maxLength;
    }
};