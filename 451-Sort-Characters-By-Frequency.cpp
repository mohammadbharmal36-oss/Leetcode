class Solution {
public:
    string frequencySort(string s) {
        string p;
        unordered_map<char,int> m;
        multimap<int,char,greater<int>> mm;
        for(auto ch:s){
            m[ch]++;
        }
        for(auto iy:m){
            mm.insert({iy.second, iy.first});
        }
        for(auto it:mm){
            for(int i=1;i<=it.first;i++){
                p.push_back(it.second);}
        }
        return p;
    }
};