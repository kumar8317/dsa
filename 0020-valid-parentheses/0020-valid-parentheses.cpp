class Solution {
public:
    bool isMatch(char c1,char c2){
        if((c1=='(' && c2==')') || (c1=='[' && c2==']') || (c1=='{' && c2=='}')){
            return true;
        }
        return false;
    }
    bool isValid(string s) {
         stack<char> st;

        for(int i =0; i<s.length();i++){
            if(s[i]== '(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    return false;
                }
                char top = st.top();
                st.pop();
                bool match = isMatch(top,s[i]);
                if(!match){
                    return false;
                }
            }
        }

        return st.empty()? true:false;
    }
};