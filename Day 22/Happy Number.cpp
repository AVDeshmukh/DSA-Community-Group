class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return 1;
        map<int,int>mp;
        
        while(n!=1){         
               
            int sum=0;
            while(n){
                int temp = n%10;
                sum += temp*temp;
                n=n/10;
            }
            
            if(mp.find(sum) != mp.end())
                return 0;
            
            mp[sum] += 1;
            n=sum;
        }
        return 1;
    }
};
