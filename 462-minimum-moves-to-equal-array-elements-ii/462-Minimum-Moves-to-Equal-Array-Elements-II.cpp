class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums.size()/2;
        int g=0;
        for(auto l:nums){
            g+=abs(nums[x]-l);
        }
        return g;
    }
};