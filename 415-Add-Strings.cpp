class Solution {
public:
    string addStrings(string num1, string num2) {
        string g;
        if(num1.size()>num2.size()){
            while(num1.size()!=num2.size()){
                num2.insert(num2.begin(),'0');
            }
        }
        if(num1.size()<num2.size()){
            while(num1.size()!=num2.size()){
                num1.insert(num1.begin(),'0');
            }
        }
        int c=0;
        for(int i=num1.size()-1;i>=0;i--){
            int x=(num1[i]-'0')+(num2[i]-'0')+c;
            if(x>=10){
                c=1;
                x=x%10;
            }
            else{
                c=0;
            }
            g.push_back(x+'0');
        }
        if(c==1){
                g.push_back('1');
            }
        reverse(g.begin(),g.end());
        return g;
    }
};