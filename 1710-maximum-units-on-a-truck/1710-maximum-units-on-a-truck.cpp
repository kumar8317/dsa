class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int totalSum = 0;
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        
        int i=0;
        
        while(truckSize >0 && i<boxTypes.size()){
            if(truckSize - boxTypes[i][0] > 0){
                truckSize -= boxTypes[i][0];
                totalSum += (boxTypes[i][0] * boxTypes[i][1]);
            }else{
                totalSum += (truckSize * boxTypes[i][1]);
                truckSize = 0;
            }
            i++;
        }
        
        return totalSum;
        
    }
};