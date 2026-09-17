class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0;
        int t=0;
        for(auto v:bills){
            if(v==5){
                f++;
            }
            else if(v==10){
                if(f==0){
                    return false;
                }
                f--;
                t++;
            }
            else{
                if(t>0&&f>0){
                    t--;
                    f--;
                }
                else if(f>=3){
                    f--;
                    f--;
                    f--;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};