class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums=arr;
        set<int> v(arr.begin(),arr.end());
        vector<int> s(v.begin(),v.end());
        sort(s.begin(),s.end());
        for(int i=0;i<nums.size();i++){
            arr[i]=lower_bound(s.begin(),s.end(),nums[i])-s.begin()+1;}
        return arr;
    }
};