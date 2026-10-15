class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=2;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                j++;}
            else{
            i++;
            nums[i+1]=nums[j];
            j++;
            }
        }
        if (nums.size()<=2){ 
            return nums.size();
        }
        return i+2;
    }
};