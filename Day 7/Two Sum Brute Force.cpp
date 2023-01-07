//Brute Force Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>a;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    a.push_back(i);
                    a.push_back(j);
                    return a;
                }
            }
        }
        return a;       
}
};
//Complexity
//Time complexity: O(N^2);
//Space Complexity: O(1);
