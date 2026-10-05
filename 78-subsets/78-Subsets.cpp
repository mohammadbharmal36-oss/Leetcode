class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> f;
        for(int i=0;i<(1<<nums.size());i++){
            vector<int> v;
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j)){
                    v.push_back(nums[j]);}
            }
            f.push_back(v);
        }
        return f;  
    }
};