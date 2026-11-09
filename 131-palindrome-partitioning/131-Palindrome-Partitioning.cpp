class Solution {
public:
    bool is(int i,int j,string &s){
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
    void sol(int t,string &s,vector<string>&d,vector<vector<string>> &a ){
        if(t==s.size()){
            a.push_back(d);
            return;
        }
        for(int k=t;k<s.size();k++){
            if(is(t,k,s)){
                d.push_back(s.substr(t,k-t+1));
                sol(k+1,s,d,a);
                d.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> a;
        vector<string> d;
        sol(0,s,d,a);
        return a;

    }
};