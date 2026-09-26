class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> f(nums.size()+1);
        for(int i:nums){
            f[i]=1;
        }
        vector<int> a;
        for(int i=1;i<=nums.size();i++){
            if(f[i]==0){
                a.push_back(i);}
        }
        return a;
    }
};