class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0;
        int n=arr.size();
        
        while(i<n){
            if(arr[i]<=n && arr[i]!=arr[arr[i]-1]){
                swap(arr[i],arr[arr[i]-1]);
            }else{
                i++;
            }
        }
        vector<int> missingNumbers;
        unordered_set<int> extraNumbers;
        
        for(int i=0;i<n && missingNumbers.size()<k;i++){
            if(arr[i]!=i+1){
                missingNumbers.push_back(i+1);
                extraNumbers.insert(arr[i]);
            }
        }
        for(int i=1;missingNumbers.size()<k;i++){
            int candidate = i+n;
            if(extraNumbers.find(candidate) == extraNumbers.end()){
                missingNumbers.push_back(candidate);
            }
        }
        return missingNumbers[k-1];
    }
};