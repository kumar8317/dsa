class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator == 0)return "0";
        
        string fraction;
        
        if(numerator<0 ^ denominator<0){
            fraction.append("-");
        }
        
        long long  dividend = labs((long long)numerator);
        long long divisor = labs((long long)denominator);
        
        fraction.append(to_string(dividend/divisor));
        long long rem = dividend%divisor;
        if(rem==0)return fraction;
        
        fraction.append(".");
        
        unordered_map<int,int> mp;
        
        while(rem!=0){
            if(mp.find(rem)!=mp.end()){
                fraction.insert(mp[rem],"(");
                fraction.append(")");
                break;
            }
            mp[rem]=fraction.length();
            rem *=10;
            fraction.append(to_string(rem/divisor));
            rem%=divisor;
        }
        return fraction;
    }
};