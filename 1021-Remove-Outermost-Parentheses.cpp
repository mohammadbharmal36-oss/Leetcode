class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int c=0;
        for(auto hh:s){
            if(hh=='('){
                c++;
                if(c>1){
                    ans.push_back(hh);
                }
            }
            else {
                c--;
                if(c>=1){
                    ans.push_back(hh);}
            }
        }
        return ans;
    }
};