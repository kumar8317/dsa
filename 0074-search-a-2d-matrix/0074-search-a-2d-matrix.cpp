class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int s=0,e=(matrix.size()*matrix[0].size())-1;
        int n=matrix[0].size();
        while(s<=e){
            int mid = s +(e-s)/2;
            int ele=matrix[mid/n][mid%n];

            if(ele == target){
                return true;
            }else if(ele>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return false;
    }
};