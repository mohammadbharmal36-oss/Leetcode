class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        int count=0;
        for(auto l:m){
            if((l.second).size()>=3){
                int x=l.second[1]-l.second[0];
                for(int i=2;i<l.second.size();i++){
                    if(l.second[i]-l.second[i-1]!=x){
                        x=-1;
                        break;}
                }
                if(x!=-1){
                    count++;}
            }}
        return count;

    }
};