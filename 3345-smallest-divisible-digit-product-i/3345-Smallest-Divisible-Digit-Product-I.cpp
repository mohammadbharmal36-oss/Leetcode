class Solution {
public:
    int smallestNumber(int n, int t) {
        int i=n;
        while(true){
            int p=1;
            int x=i;
            while(x!=0){
                int digit=x%10;
                 p*=digit;
                 x/=10;
            }
            if(p%t==0){
                return i;
            }
            i++;
        }
    }
};