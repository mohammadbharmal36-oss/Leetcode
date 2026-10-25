
class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
             if(s[i]!=s[j]){
              int a=i+1;
               int b=j;
                while(a<b &s[a]==s[b]){
                    a++;
                    b--;
                }
                if(a>=b){
                 return true;
                }
                a=i;
                b=j-1;
                while(a<b&&s[a]==s[b]){
                    a++;
                    b--;
                }
                if(a>=b){
                    return true;
                }
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
