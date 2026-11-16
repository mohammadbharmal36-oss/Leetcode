class Solution {
public:
    string digitSum(string s, int k) {
        string ans;
        int l=0;
        while(s.size()>k){
          while(l+k<s.size()){
            string p=s.substr(l,k);
            int sum=0;
            for(int i=0;i<p.size();i++){
               sum+=(p[i]-'0');
            }
            l+=k;
            ans+=to_string(sum);
          }
          string k=s.substr(l);
          int su=0;
          for(int i=0;i<k.size();i++){
            su+=(k[i]-'0');
          }
          ans+=to_string(su);
          s=ans;
          ans.clear();
          l=0;

        }
        return s;
    }
};