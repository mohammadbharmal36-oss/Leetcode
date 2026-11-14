class Solution {
public:
    int numberOfSubstrings(string s) {
        int co=0;
        int a=0;
        int b=0;
        int c=0;
        int l=0;
        for(int i=0;i<s.size();i++){
          if(s[i]=='a'){
            a++;
          }
          else if(s[i]=='b'){
            b++;
          }
          else if(s[i]=='c'){
            c++;
          }
          while(a>0&&b>0&&c>0){
            co+=(s.size()-i);
            if(s[l]=='a'){
            a--;
          }
          else if(s[l]=='b'){
            b--;
          }
          else if(s[l]=='c'){
            c--;
          }
          l++;

          }
        }
        return co;

    }
};