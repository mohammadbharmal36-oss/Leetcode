class Solution {
public:
    int an(vector<int>&nums,int k){
       vector<int> f(20001,0);
       int d=0;
        int l=0;
        int r=0;
        int c=0;
        while(r<nums.size()){
           if(f[nums[r]]==0){
             d++;
            }
            f[nums[r]]++;
            while(d>k){
                f[nums[l]]--;
                if(f[nums[l]]==0){
                    d--;
                };
                l++;
            }
            c+=(r-l+1);
            r++;
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return an(nums,k)-an(nums,k-1);
    }
};