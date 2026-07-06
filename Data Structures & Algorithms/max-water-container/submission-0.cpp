class Solution {
public:
    int maxArea(vector<int>& heights) {
       int l=0;
       int r=heights.size()-1;
       int maxwater=0;
       while(l<r){
        int width=r-l;
        int height=min(heights[l],heights[r]);
        int water=width*height;
        maxwater=max(maxwater,water);
        if(heights[l]<heights[r]){
            l++;
        }
        else{
            r--;
        }
       } 
       return maxwater;
    }
};
