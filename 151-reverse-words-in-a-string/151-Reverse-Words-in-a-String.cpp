class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        stringstream ss(s);
        string word;
        while(ss>>word){
            v.push_back(word);
        }
        reverse(v.begin(),v.end());
        string p;
        for(auto l:v){
            p+=l;
            p+=' ';
        }
        p.pop_back();
        return p;
    }
};