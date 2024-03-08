class Solution {
public:
    string reorganizeString(string s) {
       vector<int> chrCounts(26);
		for (auto& chr: s) { if(++chrCounts[chr-97] > (s.size()+1)/2) return "";}
        
        priority_queue<pair<int,char>> pq;
        
        for(int i=0;i<26;i++){
            if(chrCounts[i]){
                pq.push({chrCounts[i],i+97});
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