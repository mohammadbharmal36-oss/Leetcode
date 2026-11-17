class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int l=0;
        int c=0;
        int i=0;
        int d=nums[1]-nums[0];
        while(i<nums.size()-1){
            if(d!=nums[i+1]-nums[i]){
                if(i-l+1>=3){
                    c+=(i-l)*(i-l-1)/2;
                }
                l=i;
                d=nums[i+1]-nums[i];
            }
            i++;
        }
        int le=i-l+1;
        if(le>=3){
            c+=(le-1)*(le-2)/2;
        }
        return c;
    }
};