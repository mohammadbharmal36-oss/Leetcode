class Solution {
public:
    int possibleStringCount(string word) {
        int l=0;
        for(int i=1;i<word.size();i++){
            if(word[i]==word[i-1]){
                l++;
            }
        }
        return l+1;
    }
};