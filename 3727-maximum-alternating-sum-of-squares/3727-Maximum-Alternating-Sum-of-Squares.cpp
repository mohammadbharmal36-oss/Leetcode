class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        if(nums.size()==1){
            return pow(nums[0],2);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]*=-1;
            }
        }
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        long long sum=0;
        while(i<j){
           sum+=1LL*nums[j]*nums[j];
           sum-=1LL*nums[i]*nums[i];
           j--;
           i++;
           if(i==j){
            sum+=1LL*nums[j]*nums[j];
            break;
           }
        }
        return sum;
    }
};