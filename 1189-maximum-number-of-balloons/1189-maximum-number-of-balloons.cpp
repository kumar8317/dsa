class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        
        for(auto ch:text){
            mp[ch]++;
        }
        
        int minCount = INT_MAX;
    
            
        string input = "balon";
        
        for(char c:input){
            if(c=='l' || c=='o'){
                minCount = min(minCount,mp[c]/2);
            }else{
                minCount = min(minCount,mp[c]);
            }
            
        }
        
        return minCount;
    }
};