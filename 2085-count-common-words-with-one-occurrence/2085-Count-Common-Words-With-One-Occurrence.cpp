class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> m1;
        unordered_map<string,int> m2;
        int c=0;
        for(auto l:words1){
            m1[l]++;
        }
        for(auto l:words2){
            m2[l]++;
        }
        for(auto k:m1){
            if(k.second==1&&m2.find(k.first)!=m2.end()&&m2[k.first]==1){
                c++;
            }
        }
        return c;
    }
};