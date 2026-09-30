class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> m;
       for(auto l:strs){
        string g=l;
        sort(g.begin(),g.end());
        m[g].push_back(l);}
       vector<vector<string>> a;
       for(auto l:m){
        a.push_back(l.second);
       }
       return a;
    }
};