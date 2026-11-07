class Solution {
public:
    void permute(int l,int r,vector<vector<int>> &a,vector<int> &nums){
        if(l==r){
            a.push_back(nums);
            return;}
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            permute(l+1,r,a,nums);
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> a;
        permute(0,nums.size()-1,a,nums);
        return a;
    }
};