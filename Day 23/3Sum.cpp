class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return {};

        sort(nums.begin(),nums.end());
        if(nums[0]>0) return {};

        vector<vector<int>>res;
        
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;

            int s=i+1,e=n-1;
            int sum=0;
            while(s<e){
                sum = nums[i]+nums[s]+nums[e];

                if(sum<0) s++;
                else if(sum>0) e--;
                else{
                    res.push_back({nums[i],nums[s],nums[e]});
                    int last_low_occurence = nums[s];
                    int last_high_occurence = nums[e];

                    while(s<e && nums[s]==last_low_occurence){
                        s++;
                    }
                    while(s<e && nums[e]==last_high_occurence){
                        e--;
                    }
                }
            }
        }

        return res;
    }
};
