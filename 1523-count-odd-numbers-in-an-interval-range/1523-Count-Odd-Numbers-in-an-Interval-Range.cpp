class Solution {
public:
    int countOdds(int low, int high) {
        int d=high-low;
        if(d%2==0&&low%2!=0&&high%2!=0){
            return (d+2)/2;
        }
        else if(low%2==0&&high%2==0){
            return d/2;
        }
        else{
            return (d+1)/2;
        }

    }
};