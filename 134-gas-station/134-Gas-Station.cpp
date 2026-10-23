class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int t=0;
        int c=0;
        int s=0;
        for(int i=0;i<gas.size();i++){
            t+=gas[i]-cost[i];
            c+=gas[i]-cost[i];
            if(t<0){
                s=i+1;
                t=0;
            }
        }
        if(c<0){
            return -1;
        }
        return s;
    }
};