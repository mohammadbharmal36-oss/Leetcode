class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int t=0;
        int  x=0;
        int y=0;
        for(int i=0;i<timeSeries.size();i++){
            if(timeSeries[i]<y){
                t-=(y-timeSeries[i]);
            }
            x=timeSeries[i];
            y=x+duration;
            t+=duration;
        }
        return t;
    }
};