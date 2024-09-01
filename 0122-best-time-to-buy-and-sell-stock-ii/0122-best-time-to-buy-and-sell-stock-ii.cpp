class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=0,maxP=0;
        
        while(r<prices.size()){
            if(prices[r]>prices[l]){
                maxP += prices[r]-prices[l];
            }
                l = r;
            
            r++;
        }
        
        return maxP;
    }
};