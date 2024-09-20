class Solution {
public:
    int getMaxUniqueLetters(string s){
        bool map[26]={0};
        int maxUnique=0;
        for(int i=0;i<s.length();i++){
            if(!map[s[i]-'a']){
                maxUnique++;
                map[s[i]-'a']=true;
            }
        }
        return maxUnique;
    }
    int longestSubstring(string s, int k) {
        int count[26];
        int maxUnique=getMaxUniqueLetters(s);

        int res = 0;
        for(int curr = 1; curr<=maxUnique;curr++){
            memset(count,0,sizeof(count));
            int left=0,right=0,idx=0,unique=0,countK=0;

            while(right<s.length()){
                if(unique<=curr){
                    idx=s[right]-'a';
                    if(count[idx]==0)unique++;
                    count[idx]++;
                    if(count[idx]==k)countK++;
                    right++;
                }else{
                    idx=s[left]-'a';
                    if(count[idx]==k)countK--;
                    count[idx]--;
                    if(count[idx]==0)unique--;
                    left++;
                }
                if(unique==curr && unique==countK){
                    res=max(res,right-left);
                }
            }
        }
        return res;

    }
};