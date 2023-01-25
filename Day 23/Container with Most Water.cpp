class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e=height.size()-1;
        int mxArea = 0;

        while(s<e){
            int width = e-s;
            int ht = min(height[s],height[e]);
            int currArea = ht*width;
            mxArea = max(currArea,mxArea);

            if(height[s]<height[e]) s++;
            else if(height[s]>height[e]) e--;
            else{
                 s++; e--;
            }
        }

        return mxArea;
    }
};
