class Solution {
public:
    int minAddToMakeValid(string s) {
        int c2=0;
        int c1=0;
        for(auto l:s){
            if(l=='('){
               c1++;
            }
            else{
                if(c1>0){
                    c1--;
                }
                else{
                    c2++;
                }
            }
        }
        return c2+c1;
    }
};