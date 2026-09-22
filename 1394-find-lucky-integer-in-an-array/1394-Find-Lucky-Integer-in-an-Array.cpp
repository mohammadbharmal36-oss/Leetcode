class Solution {
public:
    int findLucky(vector<int>& arr) {
        int max=-1;
        unordered_map<int,int> m;
        for(auto l:arr){
            m[l]++;
        }
        for(auto k:m){
            if(k.first==k.second){
                if(k.first>max){
                    max=k.first;
                }
            }
        }
        if(max>-1){
            return max;
        }
        else{
        return -1;}
    }
};