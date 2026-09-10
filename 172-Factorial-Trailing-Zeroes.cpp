class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        if(n<5){
            return 0;}
            else{
                while(n>=5){
                    n=n/5;
                    count=count+n;
                }
                return count;
            }

    }
};