class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        unordered_map<char,int> freq;
        int left=0,right=0;
        int n = s.size();
        int maxLength = INT_MIN;
        int mapSize=0;
        int k=2;
        while(right<n){
            freq[s[right]]++;
            mapSize = freq.size();
           
            while(mapSize>k){
                freq[s[left]]--;
                if(freq[s[left]]<=0){
                    freq.erase(s[left]);
                }
                left++;
                mapSize = freq.size();
            }
            if(mapSize<=k){
                maxLength = max(maxLength,right-left+1);
            }
             right++;
            
            
        }
        
        return maxLength;
    }
};