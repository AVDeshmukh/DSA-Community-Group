class Solution{
  public:
    /*You are required to complete below function */
    string renew(string s)
    {
        string n="";
        for(int i=1; i<s.length(); i++)
            n+=s[i];
        return n;
    }
    string multiplyStrings(string s1, string s2) {
       if (s1 == "0" || s2 == "0")
            return "0";
        int neg=0;
        if(s1[0]=='-')
        {
            s1=renew(s1);
            neg^=1;
        }
        if(s2[0]=='-')
        {
            s2=renew(s2);
            neg^=1;
        }
        int m=s1.length();
        int n=s2.length();
        vector<int>v(m+n,0);
        for(int i=m-1; i>=0; i--)
        {
            for(int j=n-1; j>=0; j--)
            {
                v[i+j+1]+=(s1[i]-'0') * (s2[j]-'0');
                v[i+j]+=v[i+j+1]/10;
                v[i+j+1]%=10;
            }
        }
        string ans="";
        int i=0;
        while(v[i]==0)
            i++;
        if(neg)
            ans+='-';
        while(i<v.size())
        {
            ans+=to_string(v[i]);
            i++;
        }
        return ans;
    }

};