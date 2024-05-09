class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=0;
        int end=piles[0];
        long long sum = piles[0];
        for(int i=1;i<piles.size();i++){
            end=max(end,piles[i]);
            sum+=piles[i];
        }
        start=sum/=h;
        if(!start){
            start=1;
        }
        int ans;
        while(start<=end){
            int mid = start+(end-start)/2;
            int total_time=0;
            for(int i=0;i<piles.size();i++){
                total_time+=piles[i]/mid;
                if(piles[i]%mid) {
                    total_time++;
                }
            }
            if(total_time>h){
                start=mid+1;
            }else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
        
    }
};