class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int num = image[sr][sc];
        if(num == color) return image;
        while(!q.empty()){
            auto [row,col] = q.front();
            q.pop();
            
            if(row<0 || row>=image.size() || col<0 || col>=image[0].size()){
                continue;
            }
            if(image[row][col] != num){
                continue;
            }
            image[row][col]=color;
           
            
            q.push({row+1,col});
            q.push({row-1,col});
            q.push({row,col-1});
            q.push({row,col+1});
        }
        return image;
    }
};