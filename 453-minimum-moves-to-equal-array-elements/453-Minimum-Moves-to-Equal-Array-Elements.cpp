class Solution {
public:
    int minMoves(vector<int>& nums) {
        int x=*min_element(nums.begin(),nums.end());
        int sum=0;
        for(auto l:nums){
            sum+=(l-x);
        }
        return sum;
        
    }
};