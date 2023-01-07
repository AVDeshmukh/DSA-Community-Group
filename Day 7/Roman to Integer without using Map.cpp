class Solution {
public:
    int romanToInt(string s)
    {
    int i;
    int result;
    
    result = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == 'M')
            result += 1000;
        if (s[i] == 'D')
            result += 500;
        if (s[i] == 'C' && s[i + 1] != 'M' && s[i + 1] != 'D')
            result += 100;
        if (s[i] == 'L')
            result += 50;
        if (s[i] == 'X' && s[i + 1] != 'C' && s[i + 1] != 'L')
            result += 10;
        if (s[i] == 'V')
            result += 5;
        if (s[i] == 'I' && s[i + 1] != 'X' && s[i + 1] != 'V')
            result += 1;
        if ((s[i + 1] == 'M' || s[i + 1] == 'D') && s[i] == 'C')
            result -= 100;
        if ((s[i + 1] == 'C' || s[i + 1] == 'L') && s[i] == 'X')
            result -= 10;
        if ((s[i + 1] == 'X' || s[i + 1] == 'V') && s[i] == 'I')
            result -= 1;
        i++;
    }
    return (result);
}
};