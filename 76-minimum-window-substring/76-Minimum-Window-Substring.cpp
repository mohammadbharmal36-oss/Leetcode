
class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> f(256,0);
        for(auto l:t){
            f[l]++;
        }
        int ts=0;
        int l=0;
        int mi=s.size()+1;
        int start=0;
        for(int i=0;i<s.size();i++){
            if(f[s[i]]>0){
                ts++;
            }
            f[s[i]]--;
            while(ts==t.size()){
                if(i-l+1<mi){
                    mi=i-l+1;
                    start=l;
                }
                f[s[l]]++;
                if(f[s[l]]>0){
                    ts--;
                }
                l++;
            }
        }
        if(mi==s.size()+1){
            return "";
        }
        return s.substr(start,mi);
    }
};
