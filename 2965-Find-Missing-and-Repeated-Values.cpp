class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> m;
        vector<int> v;
        for(auto &g:grid){
            for(auto j:g){
                m[j]++;
            }
        }
        for(auto l:m){
            if(l.second==2){
                v.push_back(l.first);
                break;
            }
        }
        int n=1;
        for(auto u:m){
            if(u.first!=n){
                v.push_back(n);
                break;
            }
            n++;
        }
        if(v.size()==1){
            v.push_back(n);
        }
        return v;     
    }
};