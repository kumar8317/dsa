class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,right=0,len=0,n=s.length();
       vector<int> table(26);
        int maxF=0;
        
        while(right<n){
            table[s[right]-'A']++;
            maxF=max(maxF,table[s[right]-'A']);
            
            if((right-left+1)-maxF > k ){
                table[s[left]-'A']--;
                left++;
            }else{
                len=max(len,(right-left+1));
            }
            right++;
        }
        return len;
    }
};