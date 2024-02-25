class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ws=0,maxLength=0;
        set<char> st;
        for(int we=0;we<s.length();we++){
            if(st.find(s[we])==st.end()){
                st.insert(s[we]);
                maxLength = max(maxLength,we-ws+1);
            }else{
                while(s[ws]!=s[we]){
                    st.erase(s[ws]);
                    ws++;
                }
                st.erase(s[ws]);
                ws++;
                st.insert(s[we]);
            }
            
        }
        return maxLength;
    }
};