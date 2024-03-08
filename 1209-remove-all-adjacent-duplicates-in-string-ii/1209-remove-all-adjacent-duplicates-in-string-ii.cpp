class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        
        for(auto& ch:s){
            if(st.empty() || st.top().first != ch){
                st.push({ch,1});
            }else{
                pair<char,int> prev = st.top();
                st.pop();
                st.push({ch,prev.second+1});
            }
            if(st.top().second == k)st.pop();
        }
        
        string ans="";
        
        while(!st.empty()){
            pair<char,int> p = st.top();
            st.pop();
            while(p.second--){
                ans.push_back(p.first);
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};