class Solution {
public:
    int reverse(int x) {
        long long y;
        if(x>0){
            int digit;
            long long no=0;
            while(x>0){
                digit=x%10;
                no=no*10+digit;
                x=x/10;

            }
            if (no > 2147483647 || no < -2147483648LL) {
                return 0;}
            y= no;
        }
        if(x<0){
            long long digitt;
            long long noo=0;
            long long neww=-(long long)x;
            while(neww>0){
                digitt=neww%10;
                noo=noo*10+digitt;
                neww=neww/10;

            }
            if (noo> 2147483647 || noo < -2147483648LL) {
                return 0;}
            y= -(noo);
        }
        return y;
        
    }
};