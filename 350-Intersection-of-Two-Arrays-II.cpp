class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int,int> m;
        for(auto j:nums1){
           m[j]++;
        }
        for(auto l:nums2){
            if(m.find(l)!=m.end()){
                if(m[l]>0){
                v.push_back(l);
                m[l]--;}
                else if(m[l]==0){
                    continue;
                }
            }
        }
        return v;
        
    }
};