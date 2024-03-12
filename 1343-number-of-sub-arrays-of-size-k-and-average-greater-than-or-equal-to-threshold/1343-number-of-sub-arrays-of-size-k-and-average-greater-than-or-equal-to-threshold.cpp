class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        double windowAverage = 0;
        double windowSum = 0;
        for(int i=0;i<k;i++) {
            windowSum+=arr[i];
        }
        windowAverage = windowSum/k;
        int count = 0;
        if(windowAverage>=threshold){
            count++;
        }
        for(int i=k;i<arr.size();i++){
            windowSum+=arr[i]-arr[i-k];
            windowAverage = windowSum/k;
             if(windowAverage>=threshold){
                count++;
            }
        }
        
        return count;
    }
};