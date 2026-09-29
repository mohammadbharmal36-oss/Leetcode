class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int> v;
        v.push_back(-1);
        int count =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                v.push_back(i);
            }
            else{
                v.pop_back();
                if(v.empty()){
                    v.push_back(i);
                }
                else{
                    count=max(count,i-v.back());
                }
            }
        }
        
        return count;
    }
};