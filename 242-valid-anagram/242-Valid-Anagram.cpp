class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> f(256,0);
        for(auto l:s){
            f[l]++;
        }
        for(auto l:t){
            if(f[l]==0){
                return false;}
            f[l]--;
        }
        if(count(f.begin(),f.end(),0)==f.size()){
            return true;
        }
        else{
            return false;
        }
    }
};