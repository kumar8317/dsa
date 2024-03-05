class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length(),requiredchar=t.length();
        if(n < requiredchar) return "";
        int minlength=INT_MAX,left=0,right=0,start=0;
        vector <int> tmap(123,0);
        for(char &c:t) tmap[c]++;
        while(right<n){
            char curr=s[right++];
            if(tmap[curr]-->0) requiredchar--;
            while(requiredchar==0){
                int currsize=right-left;
                if(currsize < minlength){
                    minlength=currsize;
                    start=left;
                }
                if(++tmap[s[left++]]>0) requiredchar++;
            }
        }
        return minlength==INT_MAX ? "" : s.substr(start,minlength);        
    }
};