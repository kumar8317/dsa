class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        st.push({'A',1});
        
        for(char i:s){
            i==st.top().first ? st.push({i,st.top().second+1}): st.push({i,1});
            
            if(st.top().second == k){
                int temp = k;
                while(temp--){
                    st.pop();
                }
            }
        }
        string ans;
        while(st.top().first!='A'){
            ans+=st.top().first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};