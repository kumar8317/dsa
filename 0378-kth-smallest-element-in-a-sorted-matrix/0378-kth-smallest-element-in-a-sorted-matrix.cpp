class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        vector<pair<int,pair<int,int>>> temp;
        int n = mat.size();
    
          for(int i=0;i<n;i++){
              temp.push_back(make_pair(mat[i][0],make_pair(i,0)));
          }
          priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>               pq(temp.begin(),temp.end());
    
          int ans;
          int i,j;
          pair<int,pair<int,int>> element;
          while(k--){
              element = pq.top();
              pq.pop();
              ans = element.first;
              i = element.second.first;
              j = element.second.second;
              if(j+1 < n){
                  pq.push(make_pair(mat[i][j+1],make_pair(i,j+1)));
              }
          }
          return ans;
    }
};