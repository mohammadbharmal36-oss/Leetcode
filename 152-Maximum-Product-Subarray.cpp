class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            int product=1;
            for(int j=i;j<nums.size();j++){
               product=product*nums[j];
               maxx=max(product,maxx);
            }
        }
        return maxx;
    }
};