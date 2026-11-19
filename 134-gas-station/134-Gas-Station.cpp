class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=accumulate(gas.begin(),gas.end(),0);
        int m=accumulate(cost.begin(),cost.end(),0);
        if(m>n){
            return -1;
        }
        int t=0;
        int r=0;
        for(int i=0;i<gas.size();i++){
            t+=gas[i]-cost[i];
            if(t<0){
                t=0;
                r=i+1;
            }
        }
        return r;
    }
};