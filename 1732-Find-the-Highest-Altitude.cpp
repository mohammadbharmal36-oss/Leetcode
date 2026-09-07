class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v;
        int sum=0;
        v.push_back(0);
        for(auto vv:gain){
           sum=sum+vv;
           v.push_back(sum);
        }
        int x=*max_element(v.begin(),v.end());
        return x;}
};