class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int> m;
        vector<int> f(256,0);
        int t=0;
        int l=0;
        for(int i=0;i<s.size();i++){
            if(f[s[i]]==0){
                t++;
            }
            f[s[i]]++;
            while(t>maxLetters||i-l+1>minSize){
                f[s[l]]--;
                if(f[s[l]]==0){
                    t--;
                }
                l++;
            }
            if(i-l+1>=minSize&&i-l+1<=maxSize){
                m[s.substr(l,i-l+1)]++;
            }
        }
        int ma=0;
        for(auto l:m){
            ma=max(ma,l.second);
        }
        return ma;
        
    }
};