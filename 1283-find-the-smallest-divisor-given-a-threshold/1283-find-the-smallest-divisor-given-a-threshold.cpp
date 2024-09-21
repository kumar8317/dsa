class Solution {
public:
    int check(int mid,vector<int>& nums){
        
        int sum=0;
        for(int& num:nums){
            sum+= ceil((1.0*num)/mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxEle = nums[0];
        for(int i=1;i<nums.size();i++){
            maxEle = max(maxEle,nums[i]);
        }
        int low = 1,high=maxEle;
        
        while(low<high){
            int mid = low+(high-low)/2;
            
            if(check(mid,nums)<=threshold){
               // cout<<"high"<<high<<endl;
                high = mid;
                //cout<<"high1"<<high<<endl;
            }else{
                low = mid+1;
            }
             cout<<"high"<<high<<endl;
            cout<<"low"<<low<<endl;
        }
        
        return high;
    }
};