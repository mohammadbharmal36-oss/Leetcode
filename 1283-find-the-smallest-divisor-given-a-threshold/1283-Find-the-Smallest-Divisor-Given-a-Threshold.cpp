class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            long long sum=0;
            int i=0;
            while(i<nums.size()){
                sum+=(nums[i]+mid-1)/mid;
                if(sum>threshold){
                    break;
                }
                i++;
            }
            if(sum<=threshold){
                r=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        return l;
    }
};