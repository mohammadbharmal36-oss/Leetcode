class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> f(101,0);
        for(auto l:nums){
            f[l]++;
        }
        int c=0;
        int x=0;
        int i=0;
        if(target>*max_element(nums.begin(),nums.end())){
            return {};
        }
        while(i<f.size()){
            if(i==target){
                 x=f[i];
                break;
            }
            c+=f[i];
            i++;
              
        }
        vector<int> v;
        while(x>0){
            v.push_back(c);
            c++;
            x--;
        }
        return v;
    }
};