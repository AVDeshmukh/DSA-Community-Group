class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long sum=0, mx=INT_MIN;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
            mx=max(sum,mx);
            if(sum<0)
                sum=0;
        }
        return mx;
        
    }
};