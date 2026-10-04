class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ma=0;
        for(int i=0;i<nums.size();i++){
            if(ma<i){
                return false;
            }
            else{
                ma=max(ma,i+nums[i]);
            }
            if(ma>=nums.size()-1){
                return true;
            }
        }
        return false;
}};