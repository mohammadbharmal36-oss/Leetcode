class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> f(101,0);
        for(auto l:nums){
            f[l]++;
        }
        vector<int> ans;
        while(accumulate(f.begin(),f.end(),0)!=0){
            for(int i=0;i<f.size();i++){
                if(f[i]>0){
                    ans.push_back(i);
                    f[i]--;}
                
            }
        }
        return ans;
    }
};