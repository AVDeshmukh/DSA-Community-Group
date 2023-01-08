class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int i=0; i<nums2.size(); i++) {
            while (s.size() && s.top() < nums2[i])
            {
                m[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        vector<int> ans;
        for (int i=0; i<nums1.size(); i++)
        {
            if(m.count(nums1[i]))
                ans.push_back(m[nums1[i]]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};