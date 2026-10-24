class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> f;
        for(int i=0;i<nums.size()-2;i++){
             if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                int d=nums[i]+nums[l]+nums[r];
                if(d==0){
                    f.push_back({nums[i],nums[l],nums[r]});

                    l++;
                    r--;
                    while(l<r &&nums[l]==nums[l-1]){
                        l++;
                    }

                    while(l<r&&nums[r]==nums[r+1]){
                        r--;
                    }
                }
                else if(d>0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return f;
    }
};