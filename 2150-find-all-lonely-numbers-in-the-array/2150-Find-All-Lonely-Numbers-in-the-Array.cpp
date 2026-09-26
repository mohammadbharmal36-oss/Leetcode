class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> v;
        vector<int> f(1000002,0);
        for(auto l:nums){
            f[l]++;
        }
        for(auto l:nums){
            if(f[l]==1&&(l==0||f[l-1]==0)&&f[l+1]==0){
                v.push_back(l);
            }
        }
        return v;
    }
};