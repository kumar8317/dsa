class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
          priority_queue<int,vector<int>,greater<int>> q;
        
        for(int i=0;i<k;i++){
            q.push(arr[i]);
        }
        
        for(int i=k;i<arr.size();i++){
            if(arr[i]>q.top()){
                q.pop();
                q.push(arr[i]);
            }
        }
        return q.top();
    }
};