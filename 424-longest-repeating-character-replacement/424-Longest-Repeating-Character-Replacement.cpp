class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> f(256,0);
        int l=0;
        int mx=0;
        int m=0;
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
            mx=max(mx,f[s[i]]);
            while((i-l+1)-mx>k){
                f[s[l]]--;
                l++;
            }
            m=max(m,i-l+1);

        }
        return m;
    }
};