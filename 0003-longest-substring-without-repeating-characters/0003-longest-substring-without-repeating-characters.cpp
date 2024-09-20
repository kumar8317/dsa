class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int ans = INT_MIN;
        vector < int > charCount(256, -1);
       // int charCount[256]={-1};
        
        int left=0,right=0;
        
        while(right<s.size()){
         
            if(charCount[s[right]]!=-1){
                if(charCount[s[right]]>=left){
                    left = charCount[s[right]]+1;
                }
            }
            
            charCount[s[right]] = right;
            ans = max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};