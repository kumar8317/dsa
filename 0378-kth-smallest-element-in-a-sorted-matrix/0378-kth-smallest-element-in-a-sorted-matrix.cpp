class Solution {
public:
    int countElements(vector<vector<int>>& matrix,int ele){
        int cols = matrix[0].size();
        int count = 0;
        for(int r = 0,c =cols-1;r<matrix.size();r++){
            while(c>=0 && matrix[r][c]> ele)c--;
            
            if(c>=0){
                count+=c+1;
                
            }else{
                break;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n = matrix.size();
        int start=matrix[0][0];
        int end = matrix[n-1][n-1];
        int ans;
        while(start<=end){
            int mid = start+(end-start)/2;
            
            int count = countElements(matrix,mid);
            if(count>=k){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
};