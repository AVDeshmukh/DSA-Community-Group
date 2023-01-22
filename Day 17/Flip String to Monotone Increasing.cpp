class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int co=0,cf=0;
        for(auto it:s)
        {
            if(it=='1')
                co++;
            else
            {
               cf++;
               cf=min(cf,co);
            }
        }
        return cf;
    }
};