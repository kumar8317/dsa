class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == '1'){
                     ans++;
                    bfs(grid,i,j);
                }
               
            }
        }
        return ans;
    }
    
    void bfs(vector<vector<char>>& grid, int x, int y){
        queue<pair<int,int>> q;
        q.push({x,y});
        
        while(!q.empty()){
            auto [row, col] = q.front();
            q.pop();
            if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size()){
                continue;
            }
            if(grid[row][col]=='0'){
                continue;
            }
            grid[row][col]='0';
            
            q.push({row+1,col});
            q.push({row-1,col});
            q.push({row,col+1});
            q.push({row,col-1});
        }
    }
};