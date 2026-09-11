class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        multimap<int,int> l; 
        vector<int> v;
        for(auto it:nums){
            m[it]++;
        }
        for(auto n:m){
            l.insert({n.second,n.first});
        }
        auto it=l.rbegin();               
        for(int i=1;i<=k;i++){
            v.push_back(it->second);         
            it++;
        }
        return v;
    }
};