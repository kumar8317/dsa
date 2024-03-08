class Solution {
public:
    string reorganizeString(string s) {
       vector<int> counts(26);
        
        for(auto& ch:s){
            counts[ch-97]++;
            int size = (s.size()+1)/2;
            if(counts[ch-97]>size){
                return "";
            }
        }
        
        priority_queue<pair<int,char>> pq;
        
        for(int i=0;i<26;i++){
            if(counts[i]){
                pq.push({counts[i],i+97});
            }
        }
        int i=0;
        pair<int,char> prev = pq.top();
        pq.pop();
        s[i++]=prev.second;
        
        while(not pq.empty()){
            pair<int,char> curr = pq.top();
            pq.pop();
            s[i++]=curr.second;
            if(--prev.first)pq.push(prev);
            prev=curr;
        }
        return s;
    }
};