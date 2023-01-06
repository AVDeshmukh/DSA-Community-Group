class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num>0)
        {
            if(num%2==1)
            {
                num--;
                count++;
            }
            num=num/2;
            if(num!=0)
            count++;
        }
        return count;
    }
};