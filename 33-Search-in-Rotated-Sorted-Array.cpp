class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto y=find(nums.begin(),nums.end(),target);
        if(y==nums.end()){
            return -1;
        }
        return distance(nums.begin(),y);
    }
};