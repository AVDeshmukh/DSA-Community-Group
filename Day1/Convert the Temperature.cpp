class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>c; 
        double f=celsius * 1.80 + 32.00;
        double k=celsius + 273.15;
        c.push_back(k);
        c.push_back(f);
        return c;
    }
};
