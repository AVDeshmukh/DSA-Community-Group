class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int res = strs[0].length();
        int n = strs.size();
        for(int i=1; i<n; i++){
            int j = 0;
            while(j<strs[i].length() && strs[0][j]==strs[i][j])j++;
            res = min(res, j);
        }
        return strs[0].substr(0, res);

        // TC=O(n*m)

    }
};