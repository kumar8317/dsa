class Solution {
private:
    void findCombinations(int ind,vector<int>& candidates,int target,vector<vector<int>>& ans,vector<int>& temp){
       if(target==0){
           ans.push_back(temp);
           return;
       }
        
        for(int i=ind;i<candidates.size();i++){
           if(i>ind && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]<=target){
                 temp.push_back(candidates[i]);
                findCombinations(i+1,candidates,target-candidates[i],ans,temp);
                temp.pop_back();
            }
          
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        findCombinations(0,candidates,target,ans,temp);
        
        return ans;
    }
};