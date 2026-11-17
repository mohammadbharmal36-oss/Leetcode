class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int c=0;
        long long p=1;
        int l=0;
        for(int i=0;i<nums.size();i++){
            p*=nums[i];
            while(p>=k){
                p/=nums[l];
                l++;
            }
            c+=(i-l+1);
        }
        return c;
    }
};