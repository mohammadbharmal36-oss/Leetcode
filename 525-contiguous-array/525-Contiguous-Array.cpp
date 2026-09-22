class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int m=0;
        int sum=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum--;}
            else{
                sum++;
            }
            if(mp.find(sum)!=mp.end()){
                m=max(m,i-mp[sum]);
            }
            else{
                mp[sum]=i;}
        }
        return m;
    }
};