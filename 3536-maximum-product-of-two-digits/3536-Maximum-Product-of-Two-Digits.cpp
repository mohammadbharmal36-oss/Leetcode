class Solution {
public:
    int maxProduct(int n) {
        multiset<int> s ;
        while(n!=0){
         int digit=n%10;
         s.insert(digit);
         n=n/10;
        }
        auto it=s.end();
        it--;
        int x=*it;
        it--;
        int y=*it;
        return x*y;
    }
};