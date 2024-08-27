class Solution {
public:
  
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
            
        priority_queue<pair<int,pair<int,int>>> pq;
        
        for(int i=0;i<points.size();i++){
            int x = abs(points[i][0])-0;
            int y = abs(points[i][1])-0;
            int ele = x*x+y*y;
            
            pq.push(make_pair(ele,make_pair(points[i][0],points[i][1])));
        }
        
        while(pq.size()>k){
            pq.pop();
        }
        
        vector<vector<int>> ans;
        
        while(!pq.empty()){
            pair<int,pair<int,int>> ele = pq.top();
            pq.pop();
            
            ans.push_back({ele.second.first,ele.second.second});
        }
        return ans;
    }
};