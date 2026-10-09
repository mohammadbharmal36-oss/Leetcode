class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(27,0);
        for(auto l:magazine){
            v[l-97]++;}
        for(auto l:ransomNote){
            if(v[l-97]!=0){
                v[l-97]--;}
            else{
                return false;}
        }
        return true;

    }
};