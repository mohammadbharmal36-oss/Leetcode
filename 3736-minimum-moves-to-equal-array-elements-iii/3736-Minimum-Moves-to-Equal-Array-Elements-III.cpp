class Solution {
public:
    int minMoves(vector<int>& nums) {
        int x=*max_element(nums.begin(),nums.end());
        int g=0;
        for(auto l:nums){
            g+=(x-l);
        }
        return g;
    }
};