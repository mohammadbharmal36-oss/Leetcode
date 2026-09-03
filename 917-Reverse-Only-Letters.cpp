class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char> v;
        for(auto ch:s){
            if(ch>='a'&&ch<='z'){
                v.push_back(ch);
            }
            else if(ch>='A'&&ch<='Z'){
                v.push_back(ch);
            }

        }
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                s[i]=v.back();
                v.pop_back();
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                s[i]=v.back();
                v.pop_back();
            }
        }
        return s;
    }
};