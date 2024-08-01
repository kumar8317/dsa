class Solution {
public:
    int trap(vector<int>& height) {
        int leftMax=0,rightMax=0,maxHeight=height[0],index=0;
        int water=0;
        int n = height.size();
        
        for(int i=1;i<n;i++){
            if(maxHeight< height[i]){
                maxHeight = height[i];
                index = i;
            }
        }
        
        for(int i=0;i<index;i++){
            if(leftMax>height[i]){
                water+=leftMax-height[i];
            }else{
                leftMax = height[i];
            }
        }
        
        for(int i=n-1;i>index;i--){
            if(rightMax>height[i]){
                water+=rightMax-height[i];
                
            }else{
                rightMax = height[i];
            }
        }
        return water;
    }
};