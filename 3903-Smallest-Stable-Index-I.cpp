class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = k;
        vector<int> v;
        for(int i = 0; i < nums.size(); i++) {
            int mx = *max_element(nums.begin(), nums.begin() + i + 1);
            int mn = *min_element(nums.begin() + i, nums.end());
            v.push_back(mx - mn);
        }
        for(int i = 0; i < v.size(); i++) {
            if(v[i] <= k) {
                return i;
            }
        }
        return -1;
    }
};