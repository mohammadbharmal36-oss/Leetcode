class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> m;
        string word;
        for(auto &x:paragraph){
            if(x>='A'&&x<='Z'){
                x=x+32;
            }
            else if(x<'a'||x>'z'){
                x=' ';}
        }
        stringstream ss(paragraph);
        while(ss>>word){
            if(find(banned.begin(),banned.end(),word)==banned.end()){
                m[word]++;
            }
        }
        string ans;
        int mx=0;
        for(auto k:m){
            if(k.second>mx){
                mx=k.second;
                ans=k.first;}
        }
        return ans;
    }
};