    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        vector<int>v;
        int mx=0;
        for(int i=n-1; i>=0; i--)
        {
            if(arr[i]>=mx)
            {
                v.push_back(arr[i]);
                mx=arr[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};