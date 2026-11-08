class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=0;
        int maxx=0;
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                n++;
            }
            while(n>k){
                if(nums[l]==0){
                    n--;
                }
                l++;
            }
            maxx=max(maxx,i-l+1);
        }
        return maxx;
    }
};