class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> table;
        for(char c:p){
            table[c]++;
        }
        vector<int> ans;
        
        if(s.length()<p.length() || s.length()==0)return ans;
        
        int begin=0,end=0,word_size=p.length();
        int counter=table.size();
        
        while(end < s.length()){
            
            char endChar = s[end];
            
            if(table.count(endChar)==1){
                table[endChar]--;
                if(table[endChar]==0)counter--;
            }
            end++;
            
            while(counter==0){
                if(end-begin == word_size){
                    ans.push_back(begin);
                }
                
                char startChar = s[begin];
                
                if(table.count(startChar)==1){
                    table[startChar]++;
                    if(table[startChar]>0)counter++;
                }
                begin++;
            }
        }
        return ans;
    }
};