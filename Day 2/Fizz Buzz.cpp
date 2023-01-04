class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ad;
        for(int i=1; i<=n; i++)
        {
            if(i%3==0 && i%5==0)
                ad.push_back("FizzBuzz");
            else if(i%3==0)
                ad.push_back("Fizz");
            else if(i%5==0)
                ad.push_back("Buzz");
            else
                ad.push_back(to_string(i));//convert int to string function
        }
        return ad;
    }
};