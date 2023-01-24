class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        if(s.length()==1) return 1;

        map<char,int>mp;
        int ans=0;
        int temp=0;
        for(int i=0;i<s.length();i++){

        temp=0;
        for(int j=i;j<s.length();j++){
            if(mp[s[j]]<1){
                temp++;
                mp[s[j]]++;
            }else{
                break;
            }
        }

        ans = max(ans,temp);
        
        for(auto it=mp.begin();it!=mp.end();it++){
            it->second=0;
        }

        }
        ans = max(ans,temp);
        return ans;
    }
};
