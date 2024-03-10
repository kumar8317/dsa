class Solution {
public:
    bool isAlphaNumeric(char c){
    if((c>=65 && c<=90)|| (c>=97 && c<=122) || (c>=48 && c<=57)){
      return true;
    }
    return false;
  }
  char toLower(char c){
      if(c>=65 && c<=90){
          return c-'A'+'a';
      }else{
          return c;
      }
    
  }
  bool isPalindrome(std::string s) {
    // TODO: Write your code here
    int left=0,right=s.length();

    while(left<right){
      while(left<right && !isAlphaNumeric(s[left])){
        left++;
      }
      while(left<right && !isAlphaNumeric(s[right])){
        right--;
      }
      char toLeft = toLower(s[left]);
      char toRight = toLower(s[right]);
      if(toLeft!=toRight){
        return false;
      }
      left++;
      right--;

    }
    return true;
  }
};