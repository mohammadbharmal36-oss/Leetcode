class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
              int sum=0;
            if(nums[i]>9){
                int x=nums[i];
                while(x!=0){
                    int digit=x%10;
                    sum=sum+digit;
                    x=x/10;
                }
            }
            else{
                sum=sum+nums[i];
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};