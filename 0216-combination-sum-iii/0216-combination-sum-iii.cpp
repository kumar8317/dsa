class Solution {
private:
    void findCombinations(vector<vector<int>>& ans,vector<int>& temp,int k,int n,int number){
        if(n==0 && temp.size()==k){
            ans.push_back(temp);
            return;
        }else if(n<0 || temp.size()==k)return;
        
        for(int i=number;i<9;i++){
            
                temp.push_back(i+1);
                findCombinations(ans,temp,k,n-i-1,i+1);
                temp.pop_back();
            
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        findCombinations(ans,temp,k,n,0);
        
        return ans;
    }
};