class Solution {
public:
    int minRotations(string s) {
        int d=0;
        int sum=0;
        for(auto l:s){
            int x=l-'0';
            sum=sum+ min(abs(d-x),10-abs(d-x));
            d=x;
        }
        return sum;
    }
};