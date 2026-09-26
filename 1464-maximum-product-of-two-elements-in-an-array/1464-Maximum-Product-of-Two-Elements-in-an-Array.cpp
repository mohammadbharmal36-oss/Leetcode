class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> f(1001,0);
        for(auto l:nums){
            f[l]++;
        }
        vector<int> v;
        for(int i=0;i<f.size();i++){
            while(f[i]>0){
                v.push_back(i);
                f[i]--;
            }
        }
        return ((v[v.size()-1]-1)*((v[v.size()-2])-1));
    }
};