class Solution {
public:
    int addDigits(int num) {
        int y=0;
        while(num>9)// check for 2 digit no
        {
        while(num>0)
        {
            y=y+(num%10);
            num=num/10;
        }
        num=y;
        y=0;
        }
        return num;
    }
};