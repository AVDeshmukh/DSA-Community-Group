class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<n; i++)
            sum+=nums[i]; // sum of given array

        int natural=(n*(n+1))/2; //sum of first n natural numbers
        return natural - sum;
    }
};