class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> f(101,0);
        for(auto l:nums){
            f[l]++;
        }
        int x=*max_element(f.begin(),f.end());
        return x*count(f.begin(),f.end(),x);
    }
};