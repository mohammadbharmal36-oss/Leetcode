class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int l=0;
        int m=0;
        int c=1;
        for(int i=1;i<word.size();i++){
           if(word[i-1]<word[i]){
            c++;}
           else if(word[i-1]>word[i]){
            l=i;
            c=1;
           }
           if(c==5){
            m=max(m,i-l+1);
           }
        }
        return m;
    }
};