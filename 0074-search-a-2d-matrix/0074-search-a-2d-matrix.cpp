class Solution {
public:
    bool binarySearch(vector<vector<int>>& arr,int start,int end,int target,int row){
        
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[row][mid]==target){
                return true;
            }else if(arr[row][mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix[0].size();
        int m = matrix.size();
        for(int i=0;i<m;i++){
            if(matrix[i][n-1] == target){
                return true;
            }else if(matrix[i][n-1] > target){
                return binarySearch(matrix,0,n-2,target,i);
            }else{
                continue;
            }
        }
        return false;
    }
};