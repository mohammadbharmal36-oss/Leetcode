class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        vector<int> v=nums;
        int b=0;
        map<pair<int,int>,int> m;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                b++;}
            else{
                int x=min(nums[i],nums[i-1]);
                int y=max(nums[i],nums[i-1]);
                m[{x,y}]++;}
        }
        int x=0;
        for(auto p:m){
            x=max(x,p.second);
        }
        return x+b;
    }
};