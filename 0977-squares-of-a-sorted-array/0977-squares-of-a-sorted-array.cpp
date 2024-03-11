class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int left=0,right=n-1;
        int k = n-1;
        while(left<=right){
            int leftSquare = nums[left]*nums[left];
            int rightSquare = nums[right]*nums[right];
            if(rightSquare>=leftSquare){
                res[k--]=rightSquare;
                right--;
            }else{
                res[k--]=leftSquare;
                left++;
            }
        }
        return res;
    }
};