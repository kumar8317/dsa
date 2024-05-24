class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            return findMedianSortedArrays(nums2,nums1);
        }
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        int total = n1+n2;
        int target = (total+1)/2;
        
        int l=0,r=n1;
        
        while(l<=r){
            int take1 = l+(r-l)/2;
            int take2 = target-take1;
            
            int max1 = (take1==0)?INT_MIN:nums1[take1-1];
            int min1 = (take1 == n1)?INT_MAX: nums1[take1];
            
            int max2 = (take2==0)?INT_MIN:nums2[take2-1];
            int min2 = (take2==n2)?INT_MAX:nums2[take2];
            
            if(max1>min2){
                r=take1-1;
                continue;
            }
            if(max2>min1){
                l = take1+1;
                continue;
            }
            int med = max(max1,max2);
            
            if(total%2==1){
                return med;
            }else{
                return (med+min(min1,min2))/2.0;
            }
            
        }
        return 0.0;
        
    }
};