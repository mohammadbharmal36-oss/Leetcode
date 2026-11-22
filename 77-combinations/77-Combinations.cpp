class Solution {
public:
    void sol(int i,int k,vector<vector<int>>&a,vector<int> &v,vector<int> &nums){
        if(v.size()==k){
            a.push_back(v);
            return;
        }
        if(i+1<=nums.size()){
        v.push_back(nums[i]);
        sol(i+1,k,a,v,nums);
        v.pop_back();
        }
        if(i+1<=nums.size()){
        sol(i+1,k,a,v,nums);}
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> a;
        vector<int> v;
        vector<int> nums;
        nums.reserve(n);
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        sol(0,k,a,v,nums);
        return a;
    }
};