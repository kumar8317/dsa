class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> numIndex; // Map to store number and its latest index

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            // Check if num exists in the map and the difference between indices is <= k
            if (numIndex.count(num) > 0 && i - numIndex[num] <= k) {
                return true;
            }
            // Update the index for the current number
            numIndex[num] = i;
        }

        return false;
        
    }
};