class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool>m;
        for(auto p:nums)
        {
            if(m[p])
                return true;
            m[p]=true;
        }
        return false;
    }
};