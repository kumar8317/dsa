class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,right=0,len=0,n=s.length();
        unordered_map<char,int> table;
        int maxF=0;
        
        while(right<n){
            table[s[right]]++;
            maxF=max(maxF,table[s[right]]);
            
            if((right-left+1)-maxF > k ){
                table[s[left]]--;
                left++;
            }else{
                len=max(len,(right-left+1));
            }
            right++;
        }
        return len;
    }
};