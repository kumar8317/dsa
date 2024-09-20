class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = s.size();
        int wordLength = words[0].size();
        int k = words.size();
        int substringSize = wordLength*k;
        
        unordered_map<string,int> wordCount;
        
        for(string word:words){
            wordCount[word]++;
        }
        
        vector<int> ans;
        
        for(int i=0;i<wordLength;i++){
            unordered_map<string,int> seen;
            int left = i;
            int currLen = 0;
            
            for(int right = left;right+wordLength <=n;right+=wordLength){
                string temp = s.substr(right,wordLength);
                
                if(!wordCount.count(temp)){
                    seen.clear();
                    currLen=0;
                    left = right+wordLength;
                }else{
                    seen[temp]++;
                    currLen++;
                    
                    while(seen[temp]>wordCount[temp]){
                        seen[s.substr(left,wordLength)]--;
                        currLen--;
                        left+=wordLength;
                    }
                    
                }
                if(currLen == k){
                    ans.push_back(left);
                    seen[s.substr(left,wordLength)]--;
                    currLen--;
                    left+=wordLength;
                }
            }
        }
        
        return ans;
    }
};