class Solution {
public:
    bool isExpression(const string& s){
        if(s=="+" || s=="*" || s=="/" || s=="-" )return 1;
           
           return 0;
    }
    int evaluate(int ele1,int ele2, const string& s){
        
        if(s=="*"){
            return ele2*ele1;
        }else if(s=="+"){
            return ele2+ele1;
        }else if(s=="/"){
            return ele2/ele1;
        }else if(s=="-"){
            return ele2-ele1;
        }
    
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(const  string& s:tokens){
            if(isExpression(s)){
                int ele1 = st.top();
                st.pop();
                int ele2 = st.top();
                st.pop();
                
                int ans = evaluate(ele1,ele2,s);
                st.push(ans);
            }else{
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};