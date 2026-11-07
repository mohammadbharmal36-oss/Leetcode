class Solution {
public:
    void pa(int j,string &s,vector<vector<string>> &a,vector<string> &d){
      if(j==s.size()){
        a.push_back(d);
        return;
      }
      for(int i=j;i<s.size();i++){
        if(palin(s,j,i)){
            d.push_back(s.substr(j,i-j+1));
            pa(i+1,s,a,d);
            d.pop_back();
        }
      }
    }
    bool palin(string &s,int st,int en){
        while(st<en){
            if(s[st++]!=s[en--]){
                 return false;
            }
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> a;
        vector<string> d;
        pa(0,s,a,d);
        return a;

    }
};