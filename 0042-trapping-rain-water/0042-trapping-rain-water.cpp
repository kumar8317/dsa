class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int rightMax = 0;
        int maxHeight=height[0];
        int index=0;
        for(int i=1;i<n;i++) {
            if(height[i]>maxHeight) {
                maxHeight = height[i];
                index=i;
            }
        }
        int water=0;
        int leftMax=0;
        for(int i=0;i<index;i++) {
            if(leftMax>height[i]){
                water+=leftMax-height[i];
            }else{
                leftMax=height[i];
            }
            
        }
        
        for(int i=n-1;i>index;i--){
            if(rightMax>height[i]){
                water+=rightMax-height[i];
            }else{
                rightMax=height[i];
            }
        }
        return water;
    }
};