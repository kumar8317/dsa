class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            return findMedianSortedArrays(nums2,nums1);
        }
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        int total = n1+n2;
        int half = (total+1)/2;
        
        int l=0,r=n1;
        
        while(l<=r){
            int mid = l+(r-l)/2; //nums1
            int j = half - mid; //nums2
            
            int Aleft = INT_MIN;
            int Aright = INT_MAX;
            int Bleft = INT_MIN;
            int Bright = INT_MAX;
            
            if(mid>0)Aleft = nums1[mid-1];
            if(mid < n1) Aright = nums1[mid];
            
            if(j>0)Bleft = nums2[j-1];
            if(j<n2)Bright = nums2[j];
            
            if((Aleft <= Bright) && (Bleft <= Aright)) {
                if(total%2 != 0){
                    return max(Aleft,Bleft);
                }else{
                    return (max(Aleft,Bleft)+min(Aright,Bright)) / 2.0;
                }
            }else if( Aleft > Bright){
                r = mid-1;
            }else {
                l = mid+1;
            }
        }
        
        return 0.0;
        
    }
};