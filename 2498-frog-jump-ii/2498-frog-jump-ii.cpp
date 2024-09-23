class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n=stones.size();
        int prev=abs(stones[1]-stones[0]);
        int prev2=0;
        for(int i=2;i<n;i++){
            int sum= abs(stones[i]-stones[i-2]);
            int curr=max(prev,sum);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};