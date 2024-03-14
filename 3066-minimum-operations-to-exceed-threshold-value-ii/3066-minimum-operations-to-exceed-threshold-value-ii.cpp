class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
        
        for(long long int num:nums){
            pq.push(num);
        }
        int count=0;
        
        while(pq.top()<k && pq.size()>=2){
            long long int x = pq.top();
            pq.pop();
            long long int y = pq.top();
            pq.pop();
            long long z = min(x,y)*2+max(x,y);
            pq.push(z);
            count++;
        }
        
        return count;
    }
};