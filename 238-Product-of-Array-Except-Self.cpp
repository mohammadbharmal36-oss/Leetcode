class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int z=0;
        for(auto l:nums){
            if(l==0){
                z++;}
            else{
            product=product*l;}
        }
        vector<int> v(nums.size());
        for(int i=0;i<nums.size();i++){
            if(z>1){
                v[i]=0;}
            else if(z==1){
                if(nums[i]==0){
                    v[i]=product;;
                }
                else{
                    v[i]=0;}
            }
            else{
          v[i]=product/nums[i];}
        }
        return v;}
};