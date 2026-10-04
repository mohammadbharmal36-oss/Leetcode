class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5=0;
        int count10=0;
        int count20=0;
        for(auto l:bills){
            if(l==5){
                count5++;
            }
            else if(l==10){
                if(count5!=0){
                    count5--;
                }
                else{
                    return false;
                }
                count10++;
            }
            else if(l==20){
                if(count5>0&&count10>0){
                    count10--;
                    count5--;
                }
                else if(count5>=3){
                    count5-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};