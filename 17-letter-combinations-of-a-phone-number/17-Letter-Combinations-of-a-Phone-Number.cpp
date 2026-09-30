class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> m = {
            {'2',"abc"}, {'3',"def"}, {'4',"ghi"},
            {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"},
            {'8',"tuv"}, {'9',"wxyz"}
        };
        vector<string> ans = {""};
        for(char d : digits) {
            vector<string> t;
            for(string s : ans) {
                for(char c : m[d]) {
                    t.push_back(s + c);
                }
            }
            ans = t;
        }
        return ans;
    }
};