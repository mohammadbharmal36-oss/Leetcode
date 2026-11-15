class Solution {
public:
    int an(vector<int> &nums,int k){
        int l=0;
        int r=0;
        int c=0;
        int j=0;
        while(r<nums.size()){
            if(nums[r]%2!=0){
                j++;
            }
            while(j>k){
                if(nums[l]%2!=0){
                    j--;
                }
                l++;
            }
            c+=(r-l+1);
            r++;
        }
        return c;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return an(nums,k)-an(nums,k-1);
    }
};