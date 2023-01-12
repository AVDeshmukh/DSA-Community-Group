class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        string s;
        int n=str1.length();
        for(int i=2;i<n;i++)
            s.push_back(str1[i]);
        s.push_back(str1[0]);
        s.push_back(str1[1]);
        
        if(s==str2)
            return true;
            
        for(int i=0;i<n-2;i++)
            s[i+2]=str1[i];
        s[0]=str1[n-2];
        s[1]=str1[n-1];
        
        if(s==str2)
            return true;
            
        return false;

    }

};