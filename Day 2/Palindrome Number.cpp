class Solution {
public:
    bool isPalindrome(int num) {
        int temp=num; // store num into temp
        if(num<0)
            return false;
        long long y=0;// Reverted Number
        while(num>0)
        {
            y=y*10;
            y=y+(num%10);
            num=num/10;
        }
        if(temp==y)
            return true;
        else 
            return false;
    }
};