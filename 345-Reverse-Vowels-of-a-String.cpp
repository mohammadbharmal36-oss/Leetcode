class Solution {
public:
    string reverseVowels(string s) {
        vector<char> ch;
        for(auto it:s){
            if(it=='a'||it=='A'||it=='e'||it=='E'||it=='i'||it=='I'||it=='o'||it=='O'||it=='u'||it=='U'){
                ch.push_back(it);

            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
                s[i]=ch.back();
                ch.pop_back();
            }
        }
        return s;
    }
};