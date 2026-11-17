class Solution {
public:
    int longestSubstring(string s, int k) {
        int ans = 0;
        for(int t =1;t<=26;t++) {
            vector<int> f(26,0);
            int l = 0;
            int u = 0;
            int v= 0;
            for(int r=0;r<s.size();r++) {
                int c =s[r]-'a';
                if(f[c]==0) u++;
                f[c]++;
                if(f[c]==k) v++;
                while(u>t) {
                    int x =s[l]-'a';
                    if(f[x]==k) v--;
                    f[x]--;
                    if(f[x]==0) u--;
                    l++;
                }
                if(u==t&&u==v) {
                    ans = max(ans, r-l+1);
                }
            }
        }
        return ans;
    }
};