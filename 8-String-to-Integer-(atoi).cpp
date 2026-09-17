class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int h=1;
        int num=0;
        while(i<s.size()&&s[i]==' '){
            i++;
        }
        if(i<s.size()&&s[i]=='-'){
            h=-1;
            i++;
        }
        else if(i<s.size()&&s[i]=='+'){
            i++;
        }
        while(i<s.size()&&s[i]>='0'&&s[i]<='9'){
            int x=s[i]-'0';
            if(num>(INT_MAX-x)/10){
                if(h==1){
                    return INT_MAX;
                }
                else{
                    return INT_MIN;
                }
            }
            num=num*10+x;
            i++;
        }
        return num*h;
    }
};