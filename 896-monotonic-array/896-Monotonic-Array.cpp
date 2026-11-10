class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1){
            return true;
        }
        int x=nums[1]-nums[0];
        int k=0;
        while(x==0 && k<nums.size()-1){
            x=nums[k+1]-nums[k];
            k++;
        }
        if(x>0){
            for(int i=1;i<nums.size()-1;i++){
                int y=nums[i+1]-nums[i];
                if(y<0){
                    return false;
                }
            }
        }
        else if(x<0){
            for(int i=1;i<nums.size()-1;i++){
                int y=nums[i+1]-nums[i];
                if(y>0){
                    return false;
                }
            }
        }
        return true;
    }
};