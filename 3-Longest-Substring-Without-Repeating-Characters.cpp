class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string p;
        int count = 0;
        int maxx = 0;
        for(int i = 0; i < s.size(); i++){
            p.clear();
            count = 0;
            for(int j = i; j < s.size(); j++){
                if(p.find(s[j]) == string::npos){
                    p.push_back(s[j]);
                    count++;
                    maxx = max(maxx, count);}
                else{
                    break;}
            }
        }
        return maxx;
    }
};