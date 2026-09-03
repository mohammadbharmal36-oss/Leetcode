class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=1;
        int x=num;
        int ans=0;
        if(num==1){
            return true;
        }
        if(num==2){
            return false;
        }
        while(l<=x){
            long long mid=l+(x-l)/2;
            if(mid*mid<num){
               l=mid+1;
            }
            else if(mid*mid==num){
               ans=mid;
               break;
            }
            else{
                x=mid-1;
            }
        }
        if(ans==0){
            return false;
        }
        else{
            return true;
        }
    }
};