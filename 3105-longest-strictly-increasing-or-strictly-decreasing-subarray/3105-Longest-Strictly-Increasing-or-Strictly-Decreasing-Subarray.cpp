
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int na=nums.size();
        if(na==1){
            return 1;
        }
        int m=1;
        int n=1;
        for(int i=0;i<na-1;i++){
            if(nums[i+1]>nums[i]){
                int c=1;
                while(i<na-1 && nums[i+1]>nums[i]){
                    c++;
                    i++;
                }
                i--;
                m=max(m,c);
            }
            else if(nums[i+1]<nums[i]){
                int f=1;
                while(i<na-1 && nums[i+1]<nums[i]){
                    f++;
                    i++;
                }
                i--;
                n=max(n,f);
            }
        }
        return max(m,n);
    }
};
