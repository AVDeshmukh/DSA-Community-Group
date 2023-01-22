class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>m;
        for(int i=0; i<names.size(); i++)
        {
            m[heights[i]]=names[i];
        }
        vector<string>c;
        for(auto &it:m)
        {
            c.push_back(it.second);
        }
        reverse(c.begin(),c.end());
        return c;
    }
};