class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto l:nums){
            m[l]++;
        }
        vector<int> v;
        for(auto j:m){
            if(j.second==1){
                v.push_back(j.first);
            }
        }
        return v;

    }
};