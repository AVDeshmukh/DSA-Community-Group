class Solution
{
    public:
    void sort012(int a[], int n)
    {
         int ct0=0,ct1=0,ct2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) ct0++;
            else if(a[i]==1) ct1++;
            else ct2++;
        }
        int i=0;
        while(ct0){
            a[i]=0;
            i++;
            ct0--;
        }
        while(ct1){
            a[i]=1;
            i++;
            ct1--;
        }
        while(ct2){
            a[i]=2;
            i++;
            ct2--;
        }
    }
    
};