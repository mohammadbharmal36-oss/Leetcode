class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(auto ch:s){
            m[ch]++;
        }
        int size=0;
        bool odd=false;
        for(auto it:m){
            if(it.second%2==0){
                size=size+it.second;
            }
            else {
                size =size+it.second-1;
                odd =true;
            }

        }
        if(odd){
        return size+1;}
        return size;
    }
};