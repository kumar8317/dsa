class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        if(n1>n2)return findMedianSortedArrays(nums2,nums1);
        
        int total = n1+n2;
        
        int half = (total+1)/2;
        int l=0,r=n1;
        
        while(l<=r){
            int i = l+(r-l)/2; //nums1
            int j = half-i; //nums2
            
            int Aleft = i>0 ? nums1[i-1] : INT_MIN;
            int Aright = i<n1? nums1[i] : INT_MAX;
            
            int Bleft = j>0 ? nums2[j-1] : INT_MIN;
            int Bright = j<n2 ? nums2[j]: INT_MAX;
            
            if((Aleft <= Bright) && (Bleft <= Aright)){
                if(total%2 != 0){
                    return max(Aleft,Bleft);
                }else{
                    return (max(Aleft,Bleft)+min(Aright,Bright))/2.0 ;
                }
            }else if(Aleft > Bright){
                r = i-1;
            }else{
                l = i+1;
            }
        }
        
        return 0.0;
    }
};