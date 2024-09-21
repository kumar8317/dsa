class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        int m = rooms.size();
        int n = rooms[0].size();
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rooms[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        
        int drow[]={-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++){
                int nrow = row+drow[i];
                int ncol = col+dcol[i];
                
                if(nrow<0 || ncol<0 || nrow>=m || ncol>=n || rooms[nrow][ncol]!=2147483647){
                    continue;
                }
                rooms[nrow][ncol] = rooms[row][col]+1;
                q.push({nrow,ncol});
            }
        }
        
    }
};