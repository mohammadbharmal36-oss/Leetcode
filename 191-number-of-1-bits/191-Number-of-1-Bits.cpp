class Solution {
public:
    int hammingWeight(int n) {
        string p;
        while(n>0){
            int rem=n%2;
            p.push_back(rem+'0');
            n=n/2;
        }
        return count(p.begin(),p.end(),'1');
    }
};