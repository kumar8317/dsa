class Solution {
public:
    int shipWithinDays(vector<int>& arr, int D) {
        int start=arr[0];
        int end=arr[0];
        int N = arr.size();
        for(int i=1;i<N;i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        
        int ans;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            int count=1,p=0;
            
            for(int i=0;i<N;i++){
                p+=arr[i];
                if(p>mid){
                    count++;
                    p=arr[i];
                }
            }
            if(count<=D){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};