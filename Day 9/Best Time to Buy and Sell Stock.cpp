class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mn=p[0], pr=0, n=p.size();
        for(int i=0; i<n; i++)
        {
            mn=min(mn,p[i]);
            pr=max(pr, p[i]-mn);
        }
        return pr;
    }
};