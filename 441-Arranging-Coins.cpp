class Solution {
public:
    int arrangeCoins(int n) {
        long long x=n;
        long long count=0;
        long long i=1;
        while(x>=0){
           x=x-i;
           i++;
           count++;}
        return count-1;
    }
};