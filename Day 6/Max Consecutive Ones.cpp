class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0, count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i])
                count++;
            else 
                count=0;
            mx=max(mx,count);
        }
        return mx;
    }
};