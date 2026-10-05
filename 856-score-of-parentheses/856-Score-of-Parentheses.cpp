class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<char> v;
        int a=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
               v.push_back('(');
            }
            else{
                v.pop_back();
                if(i>0&&s[i-1]=='('){
                    a=a+pow(2,v.size());
                }
            }
        }
        return a;
    }
};