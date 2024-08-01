class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rowCount = grid.size();
        int colCount = grid[0].size();
        vector<int> dp(colCount,0);
       for(int row = rowCount-1;row>=0;row--){
           for(int col = colCount-1; col>=0; col--){
               if(row == rowCount-1 && col!= colCount-1){
                   dp[col] = grid[row][col]+dp[col+1];
               }else if(row!=rowCount-1 && col==colCount-1){
                   dp[col] = grid[row][col]+dp[col];
               }else if(row!=rowCount-1 && col!=colCount-1){
                   dp[col] = grid[row][col]+min(dp[col],dp[col+1]);
               }else{
                   dp[col] = grid[row][col];
               }
           }
       }
        
        return dp[0];
    }
};