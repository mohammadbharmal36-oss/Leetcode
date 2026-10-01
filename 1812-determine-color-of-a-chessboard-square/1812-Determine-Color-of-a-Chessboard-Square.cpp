class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a=-1;
        char x=coordinates[0];
        int y=coordinates[1]-'0';
        for(char i='a';i<=x;i++){
            a=a*(-1);
        }
        for(int i=1;i<=y;i++){
            a=a*-1;
        }
        return a==1;
    }
};