class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        stack<pair<int,int>> st;
        
        int start;
        
        for(int i=0;i<heights.size();i++){
            start = i;
            
            while(!st.empty() && st.top().first > heights[i]){
                int index = st.top().second;
                int height = st.top().first;
                
                st.pop();
                
                maxArea = max(maxArea, height*(i-index));
                start = index;
            }
            st.push({heights[i],start});
        }
        int n = heights.size();
        while(!st.empty()){
            maxArea = max(maxArea,st.top().first*(n-st.top().second));
            st.pop();
        }
        return maxArea;
    }
};