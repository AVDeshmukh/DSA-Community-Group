class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int>nxtgrt(n,0);
        nxtgrt[n-1]=-1;
        
        //calculating postfix next greator
        for(int i=n-2;i>=0;i--)
        {
            if(nums2[i+1]>nums2[i])
            {
                nxtgrt[i]=nums2[i+1];
            }
            else
            {
                for(int j=i+1;j<=nums2.size()-1;j++)
                {
                    nxtgrt[i]=-1;
                    if(nxtgrt[j]>nums2[i])
                    {
                        nxtgrt[i]=nxtgrt[j];
                        break;
                    }
                }
            }
        }
        
        //matching and putting value in output vector
        vector<int>out;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    out.push_back(nxtgrt[j]);
                    break;
                }
            }
        }
        return out;
        
    }
};