class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> f(100001,0);
        for(auto l:nums){
            f[l+50000]++;
        }
        vector<int> v;
        for(int i=0;i<=100000;i++){
            while(f[i]>0){
                v.push_back(i-50000);
                f[i]--;
            }
        }
        return v;
    }
};