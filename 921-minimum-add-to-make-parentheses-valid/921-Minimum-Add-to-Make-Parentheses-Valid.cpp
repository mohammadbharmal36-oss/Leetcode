class Solution {
public:
    int minAddToMakeValid(string s) {
        int c2=0;
        int c1=0;
        vector<char> v;
        for(auto l:s){
            if(l=='('){
                v.push_back(l);
            }
            else{
                if(!v.empty()){
                    v.pop_back();
                }
                else{
                    c2++;
                }
            }
        }
        if(v.size()!=0&&c2==0){
            return v.size();
        }
        else if(v.size()==0&&c2!=0){
            return c2;
        }
        else{
            return v.size()+c2;
        }
    }
};