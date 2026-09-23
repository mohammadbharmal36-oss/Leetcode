class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        vector<int> f(nums.size()+1,0);
        for(auto l:nums){
            f[l]++;
        }
        for(int i=1;i<f.size();i++){
            if(f[i]==2){
                v.push_back(i);}
        }
        return v;
    }
};