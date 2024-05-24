class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left=0,right=n-1;
        int leftMax=0,rightMax=0;
        int water=0;
        while(left<=right) {
            if(rightMax<=leftMax){
                water+=max(0,rightMax-height[right]);
                rightMax = max(rightMax,height[right]);
                right--;
            }else{
                water+=max(0,leftMax-height[left]);
                leftMax = max(leftMax,height[left]);
                left++;
            }
        }
        return water;
    }
};