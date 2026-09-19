class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long num=0;
        long long p=1;
        while(n!=0){
            int digit=n%10;
            if(digit!=0){
                sum=sum+digit;
                num=num+digit*p;
                p=p*10;
            }
            n=n/10;
        }
        return num*sum;
    }
};