unordered_set<int> s;
bool f = []{
    for (uint i = 0, powOf3 = 1; i <= 19; i++, powOf3 *= 3) s.insert(powOf3);    
    return true;
}(); 
class Solution {
public:    
    bool isPowerOfThree(int n) {
        return s.find(n) != end(s);
    }
};