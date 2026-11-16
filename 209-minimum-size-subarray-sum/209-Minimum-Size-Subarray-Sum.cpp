class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int sum=0;
        int m=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                m=min(m,i-l+1);
                sum-=nums[l];
                l++;
            }
        }
        if(m==INT_MAX){
            return 0;
        }
        return m;
    }
};