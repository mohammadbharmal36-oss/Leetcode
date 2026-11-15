class Solution {
public:
    int an(vector<int> &nums,int g){
        if(g<0){
            return 0;
        }
        int l=0;
        int r=0;
        int sum=0;
        int c=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>g){
                sum-=nums[l];
                l++;
            }
            c+=(r-l+1);
            r++;
        }
        return c;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return an(nums,goal)-an(nums,goal-1);
    }
};