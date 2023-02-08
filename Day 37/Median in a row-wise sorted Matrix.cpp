//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        vector<int>res;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                res.push_back(matrix[i][j]);
            }
        }
        sort(res.begin(),res.end());
        
        return res[res.size()/2];
    }
};
