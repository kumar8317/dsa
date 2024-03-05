class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> table;
        
        for(char c:s1){
            table[c]++;
        }
        
        int begin = 0, end = 0, counter = table.size();
        
        while(end < s2.length()){
            char endChar = s2[end];
            
            if(table.count(endChar)==1){
                table[endChar]--;
                if(table[endChar]==0)counter--;
            }
            end++;
            
            while(counter==0){
                if(end-begin == s1.length())return true;
                
                char startChar = s2[begin];
                
                if(table.count(startChar)==1){
                    table[startChar]++;
                    if(table[startChar]>0)counter++;
                }
                begin++;
            }
        }
        return false;
    }
};