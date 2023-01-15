class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        string s=countAndSay(n-1), str;
        int count=1;
        s=s+'$'; // increasing length to run for loop
        for(int i=1; i<s.length(); i++)
        {
            if(s[i]==s[i-1])
                count++;
            else
            {
                str+=to_string(count);
                str+=s[i-1];
                count=1;
            }
        }
        return str;
    }
};