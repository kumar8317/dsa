class Solution {
private:
    void findCombinations(int ind,vector<int>& candidates,int target,vector<vector<int>>& ans,vector<int>& temp){
        if(ind == candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return ;
        }
        if(candidates[ind]<=target){
            temp.push_back(candidates[ind]);
            findCombinations(ind,candidates,target-candidates[ind],ans,temp);
            temp.pop_back();
        }
        findCombinations(ind+1,candidates,target,ans,temp);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        findCombinations(0,candidates,target,ans,temp);
        
        return ans;
    }
};