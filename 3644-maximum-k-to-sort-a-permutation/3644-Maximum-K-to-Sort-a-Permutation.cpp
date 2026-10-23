class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int r=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                r&=nums[i];
                if(r==0){
                    return 0;}
            }
        }
        return max(r,0);
    }
};