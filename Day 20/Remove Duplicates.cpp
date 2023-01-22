class Solution{
public:	
		
	string removeDups(string s) 
	{
	    set<char>se;
	    string m="";
	    for(int i=0; i<s.length(); i++)
	    {
	        if(se.find(s[i]) == se.end())
	        {
	            se.insert(s[i]);
	            m+=s[i];
	        }
	    }
	    return m;
	}
};