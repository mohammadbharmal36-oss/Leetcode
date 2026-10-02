class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> f(1002,0);
        for(int i=0;i<nums1.size();i++){
            if(f[nums1[i]]==0){
                f[nums1[i]]=1;
            }
        }
        vector<int> j;
        for(int i=0;i<nums2.size();i++){
            if(f[nums2[i]]==1){
                j.push_back(nums2[i]);
                f[nums2[i]]=0;
            }
        }
        return j;
    }
};