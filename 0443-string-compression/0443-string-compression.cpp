class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,count=0;
        int n = chars.size();
        while(i<n){
            int l = 1;
            while(i+l<n && chars[i+l]==chars[i]){
                l++;
            }
            chars[count++]=chars[i];
            if(l>1){
                for(char c:to_string(l)){
                    chars[count++]=c;
                }
            }
            i+=l;
        }
              return count;
    }
};