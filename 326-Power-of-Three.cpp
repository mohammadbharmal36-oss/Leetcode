class Solution {
public:
    bool isPowerOfThree(int n) {
        long long y=1;
        while(y!=n){
            y=y*3;
            if(y>n){
                break;
            }
        }
        if(y==n){
            return true;
        }
        else{
            return false;
        }
    }
};