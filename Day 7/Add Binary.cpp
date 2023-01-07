class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        string ans="";
        int carry = 0;
        
        while(i>=0 || j>=0 || carry==1){
            if(i>=0)
            {
                carry += a[i] - '0';
                i--;
            }
            else
                carry += 0;
            if(j>=0)
            {
                carry += b[j] - '0';
                j--;
            }
            else
                carry += 0;
            ans = char(carry%2 + '0') + ans;
            carry = carry/2;
        }
        
        return ans;
    }
};