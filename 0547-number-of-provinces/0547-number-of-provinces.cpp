class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int ans = 0;
        vector<bool> visit(n);
        stack<int> st;
        
        
        for(int i=0;i<n;i++){
            if(!visit[i]){
                ans++;
                st.push(i);
                while(!st.empty()){
                    int current  = st.top();
                    st.pop();
                    //ans++;
                    for(int j=0;j<isConnected.size();j++){
                        if(isConnected[current][j] && !visit[j]){
                            visit[j]=true;
                            st.push(j);
                        }
                    }
                }
            }
        }
        
        return ans;
    }
    
    void dfs(int node,vector<vector<int>>& isConnected,vector<bool>& visit){
        visit[node] = true;
        
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[node][i] && !visit[i]){
                dfs(i,isConnected,visit);
            }
        }
    }
};