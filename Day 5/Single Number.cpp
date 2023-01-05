class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=nums[0], n=nums.size();
        for(int i=1; i<n; i++)
            a^=nums[i];
        return a;
    }
};