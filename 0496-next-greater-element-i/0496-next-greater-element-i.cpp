class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        vector<int> res(n1);
        
        unordered_map<int,int> mp;
        stack<int> st;
        
        int n2 = nums2.size();
        
        for(int i=n2-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            int ele = st.empty() ?-1:st.top();
            st.push(nums2[i]);
            
            mp[nums2[i]]=ele;
        }
        
        for(int i=0;i<n1;i++){
            int ele = mp[nums1[i]];
            res[i]=ele;
        }
        return res;
    }
};