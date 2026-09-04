class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> v;
        vector<int> f;
        v=nums;
        sort(v.begin(),v.end());
        f=v;
        reverse(f.begin(),f.end());
        if(nums==v||nums==f){
            return true;
        }
        else{
            return false;
        }
    }
};