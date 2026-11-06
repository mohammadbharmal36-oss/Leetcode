class Solution {
public:
    void find(int i,int target,vector<int> &c,vector<vector<int>> &ans,vector<int> &d){
        if(target==0){
            ans.push_back(d);
            return;
        }
        for(int j=i;j<c.size();j++){
            if(j>i&&c[j]==c[j-1]){
                continue;
            }
            if(c[j]>target){
                break;
            }
            d.push_back(c[j]);
            find(j+1,target-c[j],c,ans,d);
            d.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> d;
        find(0,target,candidates,ans,d);
        return ans;
    }
};