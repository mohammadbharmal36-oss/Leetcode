class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> v;
        v=nums;
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        return v.size()!=nums.size();
            
        
    }
};