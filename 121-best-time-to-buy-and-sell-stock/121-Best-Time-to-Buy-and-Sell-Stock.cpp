class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0;
        int x=prices[0];
        for(int i=1;i<prices.size();i++){
            m=max(m,prices[i]-x);
            if(prices[i]<x){
                x=prices[i];
            }
        }
        return m;
    }
};