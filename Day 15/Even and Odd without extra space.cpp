class Solution {
  public:
    void reArrange(int arr[], int N) {
        int even=0, odd=1;
        while (true)
        {
        while (even < N && arr[even] % 2 == 0)
            even += 2;
             
        while (odd < N && arr[odd] % 2 == 1)
            odd += 2;
             
        if (even < N && odd < N)
            swap (arr[even], arr[odd]);
             
        else
            break;
        }
    }
};