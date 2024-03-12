class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            bool isForward = nums[i]>=0;
            int slow = i, fast = i;
            
            do{
                slow = findNextIndex(nums,isForward,slow);
                fast = findNextIndex(nums,isForward,fast);
                if(fast!=-1){
                    fast = findNextIndex(nums,isForward,fast);
                }
            }while(slow!=-1 && fast!=-1 && slow!=fast);
            
            if(slow!=-1 && slow==fast){
                return true;
            }
        }
        return false;
    }
    int findNextIndex(vector<int>& nums,bool isForward,int currIndex){
        bool direction = nums[currIndex]>=0;
        if(isForward!=direction){
            return -1;
        }
        int nextIndex = (currIndex+nums[currIndex])%(int)(nums.size());
        if(nextIndex<0){
            nextIndex+=nums.size();
        }
        if(nextIndex == currIndex){
            return -1;
        }
        return nextIndex;
    }
};