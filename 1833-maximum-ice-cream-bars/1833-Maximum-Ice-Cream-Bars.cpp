class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> f(100001,0);
        for(auto l:costs){
            f[l]++;}
        int count=0;
        for(int i=0;i<f.size();i++){
            while(f[i]>0&&coins>=i){
                coins=coins-i;
                f[i]--;
                count++;
            }
            if(coins<i){
                break;
            }
        }
        return count;
    }
};