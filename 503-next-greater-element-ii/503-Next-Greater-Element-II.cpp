class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
       vector<int> a(n,-1);
       vector<int> v;
       for(int i=2*n-1;i>=0;i--){
        int in=i%n;
        while(!v.empty()&&v.back()<=nums[in]){
            v.pop_back();
        }
        if(i<n&&!v.empty()){
            a[in]=v.back();
        }
        v.push_back(nums[in]);
       }
       return a;
    }
};