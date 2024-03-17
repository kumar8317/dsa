class Solution {
public:
    struct Compare {
      bool operator()(const pair<int,int> &a,const pair<int,int> &b)const {
          if(a.first == b.first){
              return a.second > b.second;
          }
          return a.first>b.first;
      }  
    };
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<long long> result;
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>, vector<pair<int,int>>,Compare> pq;
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            pq.push({nums[i],i});
        }
        for(int i=0;i<queries.size();i++){
            vector<int> query = queries[i];
            int index = query[0];
            
            long long curr_sum=0;
            
            if(mp.find(index)!=mp.end()){
                //cout<<"no"<<endl;
            } else{
                curr_sum+=nums[index];
                mp[index]=nums[index];
            }
            int q = query[1];
            
            while(q && pq.size()){
                pair<int,int> small1 = pq.top();
                pq.pop();
                //check is small1 is marked;
                int smallIndex = small1.second;
                if(mp.find(smallIndex)==mp.end()){
                    mp[smallIndex] = nums[smallIndex];
                    curr_sum+=nums[smallIndex];
                    q--;
                }
                
                
            }

            result.push_back(sum-curr_sum);
            sum  = sum-curr_sum;
        }
        
        return result;
    }
};