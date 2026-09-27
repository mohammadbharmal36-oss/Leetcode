class Solution {
public:
    string reverseParentheses(string s) {
        vector<string> v;
        string p;
        for(auto c:s){
            if(c=='('){
                v.push_back(p);
                p="";}
            else if(c==')'){
                reverse(p.begin(),p.end());
                p=v.back()+p;
                v.pop_back();}
            else{
                p+=c;}
        }
        return p;
    }
};