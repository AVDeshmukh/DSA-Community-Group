class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        for(int i=1; i<n; i++)
        {
            if(i%2==1 && arr[i] < arr[i-1])
                swap(arr[i],arr[i-1]);
            else if(i%2==0 && arr[i] > arr[i-1])
                swap(arr[i],arr[i-1]);
        }
    }
};