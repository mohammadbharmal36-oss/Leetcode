class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int d=numBottles;
        while(numBottles>=numExchange){
        int fb=numBottles/numExchange;
         int r=numBottles%numExchange;
        d+=fb;
        numBottles=fb+r;
        }
    
        return d;
    }
};