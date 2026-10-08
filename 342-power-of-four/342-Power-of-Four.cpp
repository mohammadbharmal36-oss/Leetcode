class Solution {
public:
    bool isPowerOfFour(int n) {
        int count=0;
        if(n<=0){
            return false;
        }
        while((n&1)==0){
            count++;
            n=n>>1;
        }
        return n==1&&count%2==0;
    }
};