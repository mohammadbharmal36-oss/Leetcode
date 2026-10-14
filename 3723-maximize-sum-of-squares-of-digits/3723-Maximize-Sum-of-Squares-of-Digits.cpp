class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string p(num,'0');
        for(int i=0;i<num&&sum>0;i++) {
            int d=min(9,sum);
            p[i]+=d;
            sum-=d;
        }
        if(sum>0){
            return "";
        }
        return p;
    }
};