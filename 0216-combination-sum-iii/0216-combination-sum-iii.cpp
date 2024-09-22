class Solution {
private:
    void findCombinations(vector<vector<int>>& ans,vector<int>& temp,int k,int n,int number){
        if(n==0 && temp.size()==k){
            ans.push_back(temp);
            return;
        }
        
        for(int i=number;i<=9;i++){
            if(i<=n){
                temp.push_back(i);
                findCombinations(ans,temp,k,n-i,i+1);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        findCombinations(ans,temp,k,n,1);
        
        return ans;
    }
};