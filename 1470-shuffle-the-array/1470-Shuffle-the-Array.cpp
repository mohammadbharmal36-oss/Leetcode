class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        int j=n;
        vector<int> v;
        v.reserve(2*n);
        while(j<nums.size()){
            v.push_back(nums[i]);
            v.push_back(nums[j]);
            i++;
            j++;
        }
        return v;
    }
};