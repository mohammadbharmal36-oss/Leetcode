class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, int> m = { {'(', -3}, {'{', -2}, {'[', -1},
        {')', 3}, {'}', 2}, {']', 1}};
        vector<char> v;
        if (s.size() == 1) {
            return false;
        }
        for (auto ch : s) {
            if (m[ch] < 0) {
                v.push_back(ch);
            }
            else {
                if (v.empty()) {
                    return false;
                }
                if (m[v.back()] + m[ch] != 0) {
                    return false;
                }
                v.pop_back();
            }
        }
        if(v.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};