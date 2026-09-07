class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12){
            hour=0;
        }
        double angle=abs(30*hour-5.5*minutes);
        if(angle>180){
            angle=360-angle;
        }
        return angle;
    }
};