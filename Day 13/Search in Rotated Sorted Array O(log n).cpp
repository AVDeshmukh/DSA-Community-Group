class Solution {
public:
    int minele(vector<int>&nums)
    {
        int l=0, h=nums.size()-1;
        int mid=(l+h)/2;
        if(nums[l]<=nums[h])
            return nums[0];
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid+1]< nums[mid])
                return mid+1;
            if(nums[mid] < nums[mid-1])
                return mid;
            if(nums[l] < nums[mid])
                l=mid+1;
            else
                h=mid-1;
        }
        return 0;
    }
    int binarySearch(vector<int>&nums, int l, int h,int target)
    {
        int mid=(l+h)/2;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(target==nums[mid])
                return mid;
            if(target > nums[mid])
                l=mid+1;
            else
                h=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int mn=minele(nums);
        return max(binarySearch(nums,0,mn-1,target),binarySearch(nums,mn,nums.size()-1,target));
    }
};