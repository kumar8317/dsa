class Solution {
public:
    int maxEle(vector<vector<int>>& mat,int col){
        int n = mat.size();
        int m = mat[0].size();
        int index=0;
        int maxValue=mat[0][col];
        for(int i=1;i<n;i++){
            if(mat[i][col]>maxValue){
                maxValue = mat[i][col];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0,high=mat[0].size()-1;
        int n = mat.size();
        int m = mat[0].size();
        while(low<=high){
            int mid = low+(high-low)/2;
            int row = maxEle(mat,mid);
            int left = mid-1>=0?mat[row][mid-1]:-1;
            int right = mid+1<m?mat[row][mid+1]:-1;
           
            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }else if(mat[row][mid]<left){
                high = mid-1;
            }else{
                low = mid+1;
            }
            
        }
        return {-1,-1};
    }
};