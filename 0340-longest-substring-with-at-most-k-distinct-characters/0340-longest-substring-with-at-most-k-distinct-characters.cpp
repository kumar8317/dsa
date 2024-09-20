class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        int left=0,right=0;
        unordered_map<char,int> freq;
        
        int n = s.size();
        int maxLength = INT_MIN;
        int distinct=0;
        while(right<n){
            freq[s[right]]++;
            distinct = freq.size();
            
            while(distinct>k){
               
                freq[s[left]]--;
                if(freq[s[left]]==0){
                    freq.erase(s[left]);
                    
                }
                distinct = freq.size();
                left++;
            }
            
            maxLength = max(maxLength,right-left+1);
            right++;
        }
        
        return maxLength;
    }
};