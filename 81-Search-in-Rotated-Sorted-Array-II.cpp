class Solution {
public:
    bool search(vector<int>& nums, int target) {
        auto y=find(nums.begin(),nums.end(),target);
        if(y!=nums.end()){
            return true;
        }
        else{
            return false;
        }
        
    }
};