class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0; i<s.length(); i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
                s1+=tolower(s[i]);
        }
        int n=s1.length();
        for(int i=0; i<n;  i++)
        {
            if(s1[i]!=s1[n-i-1])
                return false;
        }
        return true;
    }
};