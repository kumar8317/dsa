class Solution {
public:
	bool dfs(int node, vector<vector<int>>& graph, vector<int>& color){
		for(auto x:graph[node]){
			if(color[x]==-1){
				color[x]=1-color[node];
				if(dfs(x,graph,color)==false){
					return false;
				}
			}else if(color[x]==color[node])return false;
		}
		return true;
	}
	bool isBipartite(vector<vector<int>>& graph) {
		// Your code goes here
		int n  = graph.size();
		vector<int> color(n,-1);
		for(int i=0;i<n;i++){
			if(color[i]==-1){
				color[i]=1;
				if(dfs(i,graph,color)==false){
					return false;
				}
			}
		}
		return true;
	}
};