class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(2*n);
        for(int i=0; i<n; i++)
        {
            a[i]=nums[i];
            a[n+i]=nums[i];
        }
        return a;
    }
};