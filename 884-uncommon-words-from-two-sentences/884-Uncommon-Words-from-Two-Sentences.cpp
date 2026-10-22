class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> m;
        stringstream ss(s1);
        string word;
        while(ss>>word) {
            m[word]++;
        }

        stringstream sy(s2);
        while(sy>>word) {
            m[word]++;
        }

        vector<string> v;
        for(auto l:m) {
            if(l.second==1) {
                v.push_back(l.first);
            }
        }
        return v;
    }
};