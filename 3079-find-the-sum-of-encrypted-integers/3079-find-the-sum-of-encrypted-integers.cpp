class Solution {
public:
    int encrypt(int num){
        int maxDigit = 0;
        int temp = num;
        while(num){
            int digit = num%10;
            maxDigit = max(maxDigit,digit);
            num/=10;
        }
        int res = 0;
        while(temp){
            res = res*10+maxDigit;
            temp/=10;
        }
        return res;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        
        for(auto num:nums){
            int x = encrypt(num);
            sum+=x;
        }
        return sum;
    }
};