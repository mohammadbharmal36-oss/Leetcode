class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        vector<string> p;
        stringstream ss(s);
        string word;
        while(ss>>word){
            p.push_back(word);
            p.push_back(" ");
        }
        reverse(p.begin(),p.end());
        string ans;
        for(auto l:p){
            ans+=l;
        }
        ans.erase(ans.begin());
        return ans;
    }
};