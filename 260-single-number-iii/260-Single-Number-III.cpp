class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long a=0;
        for(auto l:nums){
            a=a^l;
        }
        long long b=a&(-a);
        int x=0;
        int y=0;
        for(auto l:nums){
            if(l&b){
                x=x^l;
            }
            else{
                y=y^l;
            }
        }
        return {x,y};
    }
};