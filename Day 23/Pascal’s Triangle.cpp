class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        vector<int>temp={1};

        res.push_back(temp);
        if(numRows == 1) return res;

        temp.push_back(1);
        res.push_back(temp);
        if(numRows == 2) return res;
    
        for(int i=2;i<numRows;i++){
            vector<int>t;
            t.push_back(1);

            for(int j=1;j<res[i-1].size();j++){
                t.push_back(res[i-1][j] + res[i-1][j-1]);
            }

            t.push_back(1);
            res.push_back(t);
        }

        return res;
    }
};
