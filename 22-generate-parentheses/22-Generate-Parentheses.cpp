class Solution {
public:
    void pa(string &p,int n,int o,int c,vector<string>&ans){
      if(p.size()==2*n){
        ans.push_back(p);
        return;
      }
      if(o<n){
      p.push_back('(');
      pa(p,n,o+1,c,ans);
      p.pop_back();
      }
      if(c<o){
      p.push_back(')');
      pa(p,n,o,c+1,ans);
      p.pop_back();
      }
    }
    vector<string> generateParenthesis(int n) {
        string p="";
        vector<string> ans;
        pa(p,n,0,0,ans);
         return ans;
    }
};