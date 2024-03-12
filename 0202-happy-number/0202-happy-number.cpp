class Solution {
public:
    bool isHappy(int n) {
        int slow=n,fast=n;
        
        do{
            slow=findSquareSum(slow);
            fast=findSquareSum(findSquareSum(fast));
        }while(slow!=fast);
        
        return slow==1;
    }
    int findSquareSum(int n){
        int sum=0,digit;
        while(n > 0){
            digit = n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
};