class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int m=nums[0];
        int l=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(m,l);
            }
            m=max(nums[i],m*nums[i]);
            l=min(nums[i],l*nums[i]);
            ans=max(ans,m);
        }
        return ans;
    }
};