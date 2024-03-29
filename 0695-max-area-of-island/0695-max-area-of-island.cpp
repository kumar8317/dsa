class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int row = grid.size();
        int col = grid[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    int area = bfs(grid,i,j);
                    ans = max(ans,area);
                }
            }
        }
        return ans;
    }
    int bfs(vector<vector<int>>& grid,int x,int y){
        int area=0;
        queue<pair<int,int>> q;
        q.push({x,y});
        
        while(!q.empty()){
            auto [row,col] = q.front();
            q.pop();
            if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size()){
                continue;
            }
            if(grid[row][col]==0){
                continue;
            }
            grid[row][col]=0;
            area++;
            
            q.push({row+1,col});
            q.push({row-1,col});
            q.push({row,col+1});
            q.push({row,col-1});
            
        }
        return area;
    }
};