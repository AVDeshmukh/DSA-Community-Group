class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        int mx=0;
        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            if(m.find(arr[i])!=m.end())
            {
                mx=max(mx,i-m[arr[i]]);
            }
            else
                m[arr[i]]=i;
        }
        return mx;
    }
};