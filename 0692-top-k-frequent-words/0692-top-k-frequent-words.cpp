class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> cnt;
        vector<pair<int,string>> cand;
        vector<string> ans;
        
        priority_queue<pair<int,string>> h;
        
        for(string& word:words){
            cnt[word]++;
        }
        
        for(auto& p:cnt){
            h.push({-p.second,p.first});
            if(h.size()>k)h.pop();
        }
        while(!h.empty()){
            cand.push_back(h.top());
            h.pop();
        }
        
        sort(cand.begin(),cand.end());
        for(auto& p:cand){
            ans.push_back(p.second);
        }
        
        return ans;
    }
};