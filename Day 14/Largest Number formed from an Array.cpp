class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool compare(string s1,string s2){
	    return (s1+s2)>(s2+s1);
	}
	
	string printLargest(vector<string> &arr) {
	    
	    sort(arr.begin(),arr.end(),compare);
	    
	    string ans;
	    for(int i=0;i<arr.size();i++)
	        ans += arr[i];
	   
	   return ans;
	}
};

