class Solution {
public:
    void find(int i,int target,vector<int> &a,vector<vector<int>> &ans,vector<int> &d){
        if(i==a.size()){
            if(target==0){
                ans.push_back(d);
            }
            return;
        }
        if(a[i]<=target){
            d.push_back(a[i]);
            find(i,target-a[i],a,ans,d);
            d.pop_back();
        }
        find(i+1,target,a,ans,d);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> d;
        find(0,target,candidates,ans,d);
        return ans;

    }
};