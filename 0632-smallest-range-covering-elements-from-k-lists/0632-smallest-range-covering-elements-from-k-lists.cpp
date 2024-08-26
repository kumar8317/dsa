class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        
        int minimum,maximum=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            pq.push(make_pair(nums[i][0],make_pair(i,0)));
            maximum = max(maximum,nums[i][0]);
        }
        
        minimum = pq.top().first;
        vector<int> ans(2);
        ans[0] = minimum;
        ans[1] = maximum;
            
        pair<int,pair<int,int>> temp;
        int row,col,ele;
        while(pq.size()==nums.size()){
            temp = pq.top();
            pq.pop();
            
            ele = temp.first;
            row = temp.second.first;
            col = temp.second.second;
            
            if(col+1<nums[row].size()){
                col++;
                pq.push(make_pair(nums[row][col],make_pair(row,col)));
                maximum = max(maximum,nums[row][col]);
                minimum = pq.top().first;
                
                if(maximum-minimum < ans[1]-ans[0]){
                    ans[0] = minimum;
                    ans[1] = maximum;
                }
            }
        }
        return ans;
    }
};