class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> m;
        for(auto l:knowledge){
            m[l[0]]=l[1];
        }
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                string k;
                i++;
                while(s[i]!=')'){
                    k+=s[i];
                    i++;}
                if(m.find(k)==m.end()){
                    ans+='?';}
                else{
                    ans+=m[k];}
            }
            else{
                ans+=s[i];}
        }
        return ans;
    }
};