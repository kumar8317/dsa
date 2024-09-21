class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> st(deadends.begin(),deadends.end()),vis;
        
        string start="0000";
        if(st.find(start)!=st.end())return -1;
        
        queue<pair<string,int>> q;
        q.push({start,0});
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            string s =it.first;
            int dis = it.second;
            
            if(s==target)return dis;
            
            for(int i=0;i<4;i++){
                char a =s[i],b=s[i];
                a=='9'?(a='0',b--):a=='0'?(a++,b='9'):(a++,b--);
                
                string t1=s,t2=s;
                t1[i]=a;
                t2[i]=b;
                
                if(st.find(t1)==st.end() && vis.find(t1)==vis.end()){
                    q.push({t1,dis+1});
                    vis.insert(t1);
                }
                 if(st.find(t2)==st.end() && vis.find(t2)==vis.end()){
                    q.push({t2,dis+1});
                    vis.insert(t2);
                }
            }
        }
        
        return -1;
    }
};