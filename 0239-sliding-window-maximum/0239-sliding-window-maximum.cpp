class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
       
        if(k>nums.size())return ans;
        int left=0,right=0;
        while(right<nums.size()){
            if(right-left+1<k){
                pq.push({nums[right],right});
                right++;
            }else{
                if(right<nums.size())pq.push({nums[right],right});
                if(left<=pq.top().second){
                    ans.push_back(pq.top().first);
                }else{
                    while(left>pq.top().second){
                        pq.pop();
                    }
                    ans.push_back(pq.top().first);
                }
                left++;
                right++;
            }
        }
        return ans;
    }
};