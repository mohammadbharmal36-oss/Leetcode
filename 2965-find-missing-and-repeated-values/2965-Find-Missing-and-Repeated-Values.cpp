class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a=0;
        int b=0;
        int n=grid.size();
        vector<int> f(n*n,0);
        for(auto l:grid){
            for(auto k:l){
                if(f[k-1]==1){
                    a=k;
                }
                f[k-1]++;
            }
        }
        for(int i=0;i<f.size();i++){
            if(f[i]==0){
                b=i+1;
            }
        }
        return {a,b};
    }
};