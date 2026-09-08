class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==1&&nums[0]==target){
            return{0,0};
        }
        if(nums.size()==1&&nums[0]!=target){
            return{-1,-1};
        }

        auto first=lower_bound(nums.begin(),nums.end(),target);
        auto end=upper_bound(nums.begin(),nums.end(),target);
         if(first==nums.end()||*first!=target) {
            return {-1, -1};
        }
        int x=distance(nums.begin(),first);
        int y=distance(nums.begin(),end)-1;
        return {x,y};
    }
};