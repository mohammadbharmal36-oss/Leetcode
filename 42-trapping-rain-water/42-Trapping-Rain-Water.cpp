class Solution {
public:
    int trap(vector<int>& height) {
        int r=height.size()-1;
        int l=0;
        int lm=0;
        int rm=0;
        int w=0;
        while(l<r){
            if(height[l]<height[r]){
                lm=max(lm,height[l]);
                w+=lm-height[l];
                l++;
            }
            else{
                rm=max(rm,height[r]);
                w+=rm-height[r];
                r--;
            }
        }
        return w;
    }
};