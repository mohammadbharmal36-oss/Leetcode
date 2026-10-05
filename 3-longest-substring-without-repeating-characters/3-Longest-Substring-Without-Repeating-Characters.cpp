class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> f(256,0);
        int l=0;
        int m=0;
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
            while(f[s[i]]>1){
                f[s[l]]--;
                l++;
            }
            m=max(m,i-l+1);
        }
        return m;
    }
};