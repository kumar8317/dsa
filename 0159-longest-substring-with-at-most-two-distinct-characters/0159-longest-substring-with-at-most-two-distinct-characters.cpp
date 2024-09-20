class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int charCount[256]={0};
        int left=0,right=0;
        int n = s.size();
        int maxLength = INT_MIN;
        int distinctCount=0;
        int k=2;
        while(right<n){
            if(charCount[s[right]]==0){
                distinctCount++;
            }
            charCount[s[right]]++;
            
           
            while(distinctCount>k){
               charCount[s[left]]--;
                if(charCount[s[left]]==0)distinctCount--;
                left++;
            }
            
            
            maxLength = max(maxLength,right-left+1);
            right++;
        }
        
        return maxLength;
    }
};