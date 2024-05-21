class Solution {
public:
    int stairFib(int n){
        if(n==0)return 0;

        int a=0,b=1,c;

        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
    int climbStairs(int n) {
        return stairFib(n+1);
    }
};