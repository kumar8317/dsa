class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> mp(26,0);
        
        for(int i=0;i<ransomNote.length();i++){
            mp[ransomNote[i]-'a']++;
        }
        
        for(int i=0;i<magazine.length();i++) {
            if(mp[magazine[i]-'a'] !=0){
                mp[magazine[i]-'a']--;
            }
            
        }
        
        for(int i=0;i<26;i++){
            if(mp[i]!=0){
                return false;
            }
        }
        return true;
    }
};