class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> graph(n);
        
        for(auto& edge:edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        vector<bool> visited(n,false);
        
        return dfs(graph,start,end,visited);
    }
    
    bool dfs(vector<vector<int>>& graph,int node,int end, vector<bool>& visited){
        if(node == end) return true;
        visited[node] = true;
        
        for(int neighbor:graph[node]){
            if(!visited[neighbor] && dfs(graph,neighbor,end,visited)){
                return true;
            }
        }
        return false;
    }
};