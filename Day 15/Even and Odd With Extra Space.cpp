//User function Template for C++

class Solution {
  public:
    void reArrange(int arr[], int N) {
        vector<int>a,b;
        for(int i=0; i<N; i++)
        {
            if(arr[i]%2==0)
                a.push_back(arr[i]);
            else
                b.push_back(arr[i]);
        }
        int j=0;
        for(int i=0; i<a.size(); i++)
        {
            arr[j]=a[i];
            arr[j+1]=b[i];
            j+=2;
        }
    }
};